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

pub fn transform_kernel(k: i64, m: i64, q: i64, p: i64) -> f64 {
    let v0: i64 = (k).max(q);
    let v1: i64 = (m).min(p);
    if ((v1) < (v0)) {
        return 0.0;
    }
    let v2: f64 = ((((((v1) - (v0))) + (1i64))) as f64);
    let v3: f64 = ((((((((((m) - (k))) + (1i64))) + (((((p) - (q))) + (1i64))))) as f64)) - (v2));
    if ((v3) <= (0.0)) {
        return 1.0;
    } else {
        return ((v2) / (v3));
    }
}
