// SPDX-License-Identifier: GPL-3.0-only
import test from 'node:test';
import assert from 'node:assert/strict';
import fs from 'node:fs';
import { encodeKernel } from './algo.mjs';

const suite = JSON.parse(fs.readFileSync(new URL('../vectors.json', import.meta.url), 'utf8'));

test('encode_kernel_2360ec matches all canonical vectors', () => {
  for (const c of suite.cases) {
    const args = c.inputs.map((inp) => Array.isArray(inp.value) ? [...inp.value] : inp.value);
    const got = encodeKernel(...args);
    const exp_buf = c.expected_mut_slices['buf'];
    assert.equal(args[0].length, exp_buf.length);
    assert.deepEqual(args[0], exp_buf);
  }
});
