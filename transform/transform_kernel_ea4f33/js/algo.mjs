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

export function transformKernel(a, b, c, d, a4, a5) {
  const v0 = ((a) * (Math.cos(d)));
  const v1 = ((a) * (Math.sin(d)));
  const v2 = ((b) - (((c) * (Math.cos(a4)))));
  const v3 = ((((c) * (Math.sin(a4)))) * (Math.cos(a5)));
  const v4 = ((((c) * (Math.sin(a4)))) * (Math.sin(a5)));
  const v5 = ((v0) - (v2));
  const v6 = ((v1) - (v3));
  return Math.sqrt(((((((v5) * (v5))) + (((v6) * (v6))))) + (((v4) * (v4)))));
}
