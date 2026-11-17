// SPDX-License-Identifier: GPL-3.0-only
import test from 'node:test';
import assert from 'node:assert/strict';
import fs from 'node:fs';
import { raggednessFreqs } from './algo.mjs';

const suite = JSON.parse(fs.readFileSync(new URL('../vectors.json', import.meta.url), 'utf8'));

test('raggedness_freqs_fe85ee matches all canonical vectors', () => {
  for (const c of suite.cases) {
    const args = c.inputs.map((inp) => Array.isArray(inp.value) ? [...inp.value] : inp.value);
    const got = raggednessFreqs(...args);
    assert.ok(Math.abs(got - c.expected_return.value) <= suite.epsilon, `${c.label}: got ${got}`);
  }
});
