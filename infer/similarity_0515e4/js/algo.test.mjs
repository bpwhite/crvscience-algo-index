// SPDX-License-Identifier: GPL-3.0-or-later
// Copyright (C) 2026 CRV Science Network (https://crvscience.com)
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://gnu.org>.

import test from 'node:test';
import assert from 'node:assert/strict';
import fs from 'node:fs';
import { similarity } from './algo.mjs';

const suite = JSON.parse(fs.readFileSync(new URL('../vectors.json', import.meta.url), 'utf8'));

test('similarity_0515e4 matches all canonical vectors', () => {
  for (const c of suite.cases) {
    const args = c.inputs.map((inp) => Array.isArray(inp.value) ? [...inp.value] : inp.value);
    const got = similarity(...args);
    assert.ok(Math.abs(got - c.expected_return.value) <= suite.epsilon, `${c.label}: got ${got}`);
  }
});
