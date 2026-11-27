// SPDX-License-Identifier: GPL-3.0-only
// Zero-dependency polyglot verification runner for crvscience-algo-index.
// Validates catalog.json (when present), validates every vectors.json schema,
// and executes all js/algo.test.mjs and python/test_algo.py suites across all 47 algorithms.

import fs from 'node:fs';
import path from 'node:path';
import { execFileSync, spawnSync } from 'node:child_process';
import { fileURLToPath } from 'node:url';

const __filename = fileURLToPath(import.meta.url);
const __dirname = path.dirname(__filename);
const ROOT = path.resolve(__dirname, '..');

const CATEGORIES = ['encode', 'infer', 'measure', 'order', 'project', 'select', 'transform'];
const ALLOWED_KINDS = new Set([
  'i64',
  'u64',
  'u32',
  'usize',
  'f64',
  'bool',
  'array_i64',
  'array_f64',
  'array_u8',
  'i64_slice',
  'f64_slice',
  'u8_slice',
  'mut_i64_slice',
  'mut_f64_slice',
]);

function findPythonExecutable() {
  for (const cand of ['python3', 'python', 'py']) {
    const args = cand === 'py' ? ['-3', '--version'] : ['--version'];
    const res = spawnSync(cand, args, { encoding: 'utf8' });
    if (res.status === 0) {
      return cand === 'py' ? { cmd: 'py', prefixArgs: ['-3'] } : { cmd: cand, prefixArgs: [] };
    }
  }
  return null;
}

function validateTypedValue(val, context) {
  if (!val || typeof val !== 'object' || Array.isArray(val)) {
    throw new Error(`${context}: expected typed value object`);
  }
  if (typeof val.kind !== 'string' || val.kind.length === 0) {
    throw new Error(`${context}: missing or invalid 'kind' string`);
  }
  if (!ALLOWED_KINDS.has(val.kind) && !val.kind.endsWith('_slice') && !val.kind.startsWith('array_')) {
    throw new Error(`${context}: unexpected kind '${val.kind}'`);
  }
  if (!('value' in val)) {
    throw new Error(`${context}: missing 'value' field`);
  }
}

function validateVectorsSchema(vectorsPath, expectedSlug, expectedCategory) {
  const raw = fs.readFileSync(vectorsPath, 'utf8');
  const data = JSON.parse(raw);

  if (data.canonical_slug !== expectedSlug) {
    throw new Error(
      `${vectorsPath}: canonical_slug '${data.canonical_slug}' != '${expectedSlug}'`,
    );
  }
  if (data.category !== expectedCategory) {
    throw new Error(`${vectorsPath}: category '${data.category}' != '${expectedCategory}'`);
  }
  if (typeof data.epsilon !== 'number' || !Number.isFinite(data.epsilon) || data.epsilon < 0) {
    throw new Error(`${vectorsPath}: invalid epsilon '${data.epsilon}'`);
  }
  if (!Array.isArray(data.cases) || data.cases.length === 0) {
    throw new Error(`${vectorsPath}: 'cases' must be a non-empty array`);
  }

  for (let i = 0; i < data.cases.length; i++) {
    const c = data.cases[i];
    const ctx = `${vectorsPath} case[${i}]`;
    if (!c || typeof c !== 'object') {
      throw new Error(`${ctx}: case must be an object`);
    }
    if (typeof c.label !== 'string' || c.label.length === 0) {
      throw new Error(`${ctx}: missing non-empty 'label'`);
    }
    if (!Array.isArray(c.inputs)) {
      throw new Error(`${ctx}: 'inputs' must be an array`);
    }
    for (let j = 0; j < c.inputs.length; j++) {
      validateTypedValue(c.inputs[j], `${ctx}.inputs[${j}]`);
    }
    validateTypedValue(c.expected_return, `${ctx}.expected_return`);
    if (
      !c.expected_mut_slices ||
      typeof c.expected_mut_slices !== 'object' ||
      Array.isArray(c.expected_mut_slices)
    ) {
      throw new Error(`${ctx}: 'expected_mut_slices' must be an object`);
    }
  }
  return data.cases.length;
}

function discoverAlgorithms() {
  const algos = [];
  for (const category of CATEGORIES) {
    const catDir = path.join(ROOT, category);
    if (!fs.existsSync(catDir)) continue;
    const entries = fs
      .readdirSync(catDir, { withFileTypes: true })
      .filter((d) => d.isDirectory())
      .map((d) => d.name)
      .sort();
    for (const slug of entries) {
      algos.push({
        category,
        slug,
        relPath: `${category}/${slug}`,
        absPath: path.join(catDir, slug),
      });
    }
  }
  return algos;
}

function main() {
  const py = findPythonExecutable();
  if (!py) {
    console.error('ERROR: No Python 3 interpreter found (tried python3, python, py -3).');
    process.exit(1);
  }

  const algos = discoverAlgorithms();
  if (algos.length !== 47) {
    console.error(`ERROR: Expected 47 algorithm directories, found ${algos.length}.`);
    process.exit(1);
  }

  const catalogPath = path.join(ROOT, 'catalog.json');
  if (fs.existsSync(catalogPath)) {
    const catalog = JSON.parse(fs.readFileSync(catalogPath, 'utf8'));
    if (catalog.algorithm_count !== algos.length || !Array.isArray(catalog.algorithms)) {
      console.error('ERROR: catalog.json algorithm_count mismatch.');
      process.exit(1);
    }
    if (catalog.algorithms.length !== algos.length) {
      console.error('ERROR: catalog.json algorithms array length mismatch.');
      process.exit(1);
    }
  }

  let totalCases = 0;
  let jsPassed = 0;
  let pyPassed = 0;
  const failures = [];

  for (const algo of algos) {
    const vectorsPath = path.join(algo.absPath, 'vectors.json');
    const jsTestPath = path.join(algo.absPath, 'js', 'algo.test.mjs');
    const pyTestPath = path.join(algo.absPath, 'python', 'test_algo.py');

    try {
      const caseCount = validateVectorsSchema(vectorsPath, algo.slug, algo.category);
      totalCases += caseCount;
    } catch (err) {
      failures.push(`[SCHEMA] ${algo.relPath}: ${err.message}`);
      continue;
    }

    if (!fs.existsSync(jsTestPath)) {
      failures.push(`[JS] ${algo.relPath}: missing js/algo.test.mjs`);
    } else {
      try {
        execFileSync(process.execPath, [jsTestPath], { cwd: ROOT, stdio: 'pipe' });
        jsPassed += 1;
      } catch (err) {
        const stderr = err.stderr ? String(err.stderr).trim() : err.message;
        failures.push(`[JS] ${algo.relPath}: ${stderr}`);
      }
    }

    if (!fs.existsSync(pyTestPath)) {
      failures.push(`[PYTHON] ${algo.relPath}: missing python/test_algo.py`);
    } else {
      try {
        execFileSync(py.cmd, [...py.prefixArgs, pyTestPath], { cwd: ROOT, stdio: 'pipe' });
        pyPassed += 1;
      } catch (err) {
        const stderr = err.stderr ? String(err.stderr).trim() : err.message;
        failures.push(`[PYTHON] ${algo.relPath}: ${stderr}`);
      }
    }
  }

  if (failures.length > 0) {
    console.error(`FAILED (${failures.length} errors across ${algos.length} algorithms):`);
    for (const f of failures) {
      console.error(`  - ${f}`);
    }
    process.exit(1);
  }

  console.log(
    `PASS: Verified ${algos.length}/47 algorithms (${totalCases} test vectors, ${jsPassed}/47 JS suites, ${pyPassed}/47 Python suites).`,
  );
}

main();
