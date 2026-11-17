// SPDX-License-Identifier: GPL-3.0-only
import test from 'node:test';
import assert from 'node:assert/strict';
import fs from 'node:fs';
import { nearestRungIndex } from './algo.mjs';

const suite = JSON.parse(fs.readFileSync(new URL('../vectors.json', import.meta.url), 'utf8'));

test('nearest_rung_index_5f0f01 matches all canonical vectors', () => {
  for (const c of suite.cases) {
    const args = c.inputs.map((inp) => Array.isArray(inp.value) ? [...inp.value] : inp.value);
    const got = nearestRungIndex(...args);
    assert.equal(got, c.expected_return.value, c.label);
  }
});
