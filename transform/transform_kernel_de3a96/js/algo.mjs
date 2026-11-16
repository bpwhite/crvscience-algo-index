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

export function transformKernel(xs, a) {
  if (((xs.length) === (0))) {
    return 0.0;
  }
  const v0 = ((Math.min(Math.max(a, 0.0), 1.0)) * (Number(((xs.length) - (1)))));
  const v1 = Math.trunc(Number(Math.floor(v0)));
  const v2 = Math.trunc(Number(Math.ceil(v0)));
  if (((v1) === (v2))) {
    return xs[v1];
  } else {
    const v3 = ((v0) - (Number(v1)));
    return ((((xs[v1]) * (((1.0) - (v3))))) + (((xs[v2]) * (v3))));
  }
}
