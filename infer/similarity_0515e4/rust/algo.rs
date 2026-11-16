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

pub fn similarity(xs: &[f64], ys: &[f64]) -> f64 {
    let v0: i64 = ((xs.len() as i64)).min((ys.len() as i64));
    if ((v0) == (0i64)) {
        return 0.0;
    }
    let mut v1: f64 = 0.0;
    for i in (0i64)..(v0) {
        v1 = ((v1) + ((((xs[(i) as usize]) - (ys[(i) as usize]))).abs()));
    }
    return ((1.0) / (((1.0) + (((v1) / (((v0) as f64)))))));
}
