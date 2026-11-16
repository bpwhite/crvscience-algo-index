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

pub fn transform_kernel(a: f64, b: f64, c: f64, d: f64, a4: f64, a5: f64, a6: f64) -> f64 {
    let v0: f64 = (((((((((b) * (a))) * (0.25))).cos()) / (c))).abs()).powf(a5);
    let v1: f64 = (((((((((b) * (a))) * (0.25))).sin()) / (d))).abs()).powf(a6);
    let v2: f64 = (((v0) + (v1))).max(0.000000001);
    return (v2).powf((((-(1.0))) / ((a4).max(0.1))));
}
