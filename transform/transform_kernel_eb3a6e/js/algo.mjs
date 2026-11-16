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

export function transformKernel(a) {
  const v0 = ((Math.min(Math.max(a, 0.0), 40.0)) + (273.15));
  const v1 = (((((((((-(139.34411))) + (((157570.100000000006) / (v0))))) - (((66423080.0) / (((v0) * (v0))))))) + (((12438000000.0) / (((((v0) * (v0))) * (v0))))))) - (((862194900000.0) / (((((((v0) * (v0))) * (v0))) * (v0))))));
  return Math.exp(v1);
}
