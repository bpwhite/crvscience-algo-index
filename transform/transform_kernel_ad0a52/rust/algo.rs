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

pub fn transform_kernel(k: i64, m: i64, q: i64) -> f64 {
    if ((k) < (20i64)) {
        return 0.5;
    }
    let v0: f64 = ((((m) as f64)) / (((k) as f64)));
    let v1: f64 = ((((q) as f64)) / (((k) as f64)));
    let v2: f64 = (((((1.0) - (((2.0) * (v0))))) - (v1))).max(0.01);
    let v3: f64 = (((1.0) - (((2.0) * (v1))))).max(0.01);
    return (((((((-(0.5))) * ((v2).ln()))) - (((0.25) * ((v3).ln()))))).max(0.0)).min(1.5);
}
