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

export function kl(xs, ys) {
  let v0 = 0.0;
  for (let i = (0); i < (4); ++i) {
    if (((((xs[i]) > (0.0))) && (((ys[i]) > (0.0))))) {
      v0 = ((v0) + (((xs[i]) * (((Math.log(((xs[i]) / (ys[i])))) / (0.69314718056))))));
    }
  }
  return v0;
}
