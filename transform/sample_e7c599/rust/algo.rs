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

pub fn sample(a: f64, b: f64) -> i64 {
    if ((a) <= (0.000000000001)) {
        return 0i64;
    }
    let v0: f64 = (a).min(45.0);
    let mut v1: f64 = ((-(v0))).exp();
    let mut v2: f64 = v1;
    if ((b) <= (v2)) {
        return 0i64;
    }
    for i in (1i64)..=(96i64) {
        v1 = ((v1) * (((v0) / (((i) as f64)))));
        v2 = ((v2) + (v1));
        if ((b) <= (v2)) {
            return i;
        }
    }
    return 96i64;
}
