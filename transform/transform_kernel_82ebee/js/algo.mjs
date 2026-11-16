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
  const v0 = Math.min(Math.max(a, 0.0), 1.0);
  const v1 = ((Math.min(Math.max(b, 0.0), 1200.0)) / (1000.0));
  const v2 = Math.min(Math.max(c, 0.02), 0.85);
  const v3 = Math.max(((((((0.41) * (v0))) + (((0.67) * (v1))))) + (((0.7) * (v2)))), 0.0001);
  const v4 = ((3.63) / (v3));
  return ((4.0) * (v4));
}
