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

export function shannonEntropy(xs) {
  let v0 = 0;
  for (let i = (0); i < (xs.length); ++i) {
    v0 = ((v0) + (xs[i]));
  }
  if (((v0) === (0))) {
    return 0.0;
  }
  const v1 = Number(v0);
  let v2 = 0.0;
  for (let j = (0); j < (xs.length); ++j) {
    const v3 = xs[j];
    if (((v3) > (0))) {
      const v4 = ((Number(v3)) / (v1));
      v2 = ((v2) - (((v4) * (((Math.log(v4)) / (0.69314718056))))));
    }
  }
  return v2;
}
