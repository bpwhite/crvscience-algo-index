// SPDX-License-Identifier: GPL-3.0-only
import test from 'node:test';
import assert from 'node:assert/strict';
import fs from 'node:fs';
import { encodeKernel } from './algo.mjs';

const suite = JSON.parse(fs.readFileSync(new URL('../vectors.json', import.meta.url), 'utf8'));

test('encode_kernel_3c73f6 matches all canonical vectors', () => {
  for (const c of suite.cases) {
    const args = c.inputs.map((inp) => Array.isArray(inp.value) ? [...inp.value] : inp.value);
    const got = encodeKernel(...args);
    assert.equal(got, c.expected_return.value, c.label);
  }
});
