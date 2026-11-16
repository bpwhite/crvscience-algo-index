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

export function transformKernel(k, a) {
  const v0 = Math.min(Math.max(a, 0.5), 3.0);
  const v1 = ((Math.log(Number(Math.max(k, 40)))) / (2.302585092994));
  const v2 = Math.max(((4.35) - (((0.28) * (((v0) - (1.0)))))), 3.4);
  const v3 = Math.max(((1.75) - (((0.15) * (((v0) - (1.0)))))), 1.3);
  const v4 = ((((v2) - (v1))) / (((v2) - (v3))));
  return Math.min(Math.max(v4, 0.03), 0.96);
}
