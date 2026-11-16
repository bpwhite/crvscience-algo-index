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
    let v0: f64 = ((a).max(0.5)).min(3.0);
    let v1: f64 = ((((((k).max(40i64)) as f64)).ln()) / (2.302585092994));
    let v2: f64 = (((4.35) - (((0.28) * (((v0) - (1.0))))))).max(3.4);
    let v3: f64 = (((1.75) - (((0.15) * (((v0) - (1.0))))))).max(1.3);
    let v4: f64 = ((((v2) - (v1))) / (((v2) - (v3))));
    return ((v4).max(0.03)).min(0.96);
}
