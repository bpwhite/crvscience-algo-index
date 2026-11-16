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

export function transformKernel(a, b, c) {
  if (((((b) <= (0.0001))) || (((a) <= (0.1))))) {
    return 0.0;
  }
  const v0 = ((((((4.22) + (((0.39) * (Math.sqrt(Math.max(a, 0.0))))))) + (((0.36) * (Math.log(Math.max(b, 0.005))))))) + (((0.13) * (Math.sqrt(Math.max(c, 5.0))))));
  return Math.exp(Math.min(Math.max(v0, (-(5.0))), 14.2));
}
