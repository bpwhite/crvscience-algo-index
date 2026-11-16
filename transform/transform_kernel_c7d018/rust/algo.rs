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

pub fn transform_kernel(k: i64, a: f64) -> f64 {
    let v0: f64 = (((k).max(2i64)) as f64);
    let v1: f64 = ((((v0) - (1.0))) / (v0));
    let v2: f64 = ((a).max(0.0)).min(v1);
    if ((v2) <= (0.0)) {
        return (((v0).ln()) / (0.69314718056));
    }
    if ((v2) >= (((v1) - (0.000000000001)))) {
        return 0.0;
    }
    let v3: f64 = (((((-(v2))) * ((((((v2) / (((v0) - (1.0))))).ln()) / (0.69314718056))))) - (((((1.0) - (v2))) * ((((((1.0) - (v2))).ln()) / (0.69314718056))))));
    return ((((((v0).ln()) / (0.69314718056))) - (((2.0) * (v3))))).max(0.0);
}
