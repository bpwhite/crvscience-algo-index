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

export function sample(a, b) {
  if (((a) <= (0.000000000001))) {
    return 0;
  }
  const v0 = Math.min(a, 45.0);
  let v1 = Math.exp((-(v0)));
  let v2 = v1;
  if (((b) <= (v2))) {
    return 0;
  }
  for (let i = (1); i <= (96); ++i) {
    v1 = ((v1) * (((v0) / (Number(i)))));
    v2 = ((v2) + (v1));
    if (((b) <= (v2))) {
      return i;
    }
  }
  return 96;
}
