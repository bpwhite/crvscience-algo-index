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

export function transformKernel(k, a, m) {
  const v0 = Number(k);
  const v1 = Number(m);
  const v2 = Math.max(((a) / (Math.max(v0, 1.0))), 0.0);
  const v3 = ((((v0) * (Math.log(v2)))) + (((2.0) * (v1))));
  if (((k) > (((m) + (1))))) {
    return ((v3) + (((((((2.0) * (v1))) * (((v1) + (1.0))))) / (Number(((((k) - (m))) - (1)))))));
  } else {
    return ((v3) + (100.0));
  }
}
