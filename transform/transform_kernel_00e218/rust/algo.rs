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

pub fn transform_kernel(xs: &[f64], a: f64) -> f64 {
    if (((xs.len() as i64)) == (0i64)) {
        return 0.0;
    }
    let v0: f64 = ((((a).max(0.0)).min(1.0)) * ((((((xs.len() as i64)) - (1i64))) as f64)));
    let v1: i64 = (((v0).floor()) as i64);
    let v2: i64 = (((v0).ceil()) as i64);
    let v3: f64 = ((v0) - (((v1) as f64)));
    return ((((xs[(v1) as usize]) * (((1.0) - (v3))))) + (((xs[(v2) as usize]) * (v3))));
}
