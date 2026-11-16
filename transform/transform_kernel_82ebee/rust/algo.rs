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

#![forbid(unsafe_code)]
#![allow(clippy::needless_return, unused_parens)]

pub fn transform_kernel(a: f64, b: f64, c: f64) -> f64 {
    let v0: f64 = ((a).max(0.0)).min(1.0);
    let v1: f64 = ((((b).max(0.0)).min(1200.0)) / (1000.0));
    let v2: f64 = ((c).max(0.02)).min(0.85);
    let v3: f64 = (((((((0.41) * (v0))) + (((0.67) * (v1))))) + (((0.7) * (v2))))).max(0.0001);
    let v4: f64 = ((3.63) / (v3));
    return ((4.0) * (v4));
}
