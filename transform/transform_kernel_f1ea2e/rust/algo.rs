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

pub fn transform_kernel(k: i64) -> i64 {
    if ((k) < (15i64)) {
        return 3i64;
    }
    let v0: f64 = ((k) as f64);
    let mut v1: f64 = 1.0;
    let mut v2: i64 = 1i64;
    for i in (1i64)..=(35i64) {
        let v3: f64 = ((i) as f64);
        let v4: f64 = ((1.0) - (((((v3) * (((v3) + (1.0))))) / ((((2.5) * (v0))).max(20.0)))));
        if ((v4) <= (0.0)) {
            break;
        }
        v1 = ((v1) * (v4));
        if ((v1) >= (0.95)) {
            v2 = i;
        } else {
            break;
        }
    }
    return (v2).max(2i64);
}
