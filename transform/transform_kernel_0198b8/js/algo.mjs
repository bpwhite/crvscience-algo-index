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

export function transformKernel(a, b, c, d, a4, a5, a6) {
  const v0 = Math.pow(Math.abs(((Math.cos(((((b) * (a))) * (0.25)))) / (c))), a5);
  const v1 = Math.pow(Math.abs(((Math.sin(((((b) * (a))) * (0.25)))) / (d))), a6);
  const v2 = Math.max(((v0) + (v1)), 0.000000001);
  return Math.pow(v2, (((-(1.0))) / (Math.max(a4, 0.1))));
}
