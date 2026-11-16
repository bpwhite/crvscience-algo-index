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
    let v0: f64 = (((a) + (273.15))).max(180.0);
    let v1: f64 = ((((b) / ((((1.0) - (b))).max(0.9)))).max(0.000001)).min(0.05);
    let v2: f64 = (((((c) * (v1))) / (((0.622) + (v1))))).max(0.0001);
    let v3: f64 = ((((2840.0) / (((((((3.5) * ((v0).ln()))) - ((v2).ln()))) - (4.805))))) + (55.0));
    let v4: f64 = ((((v0) * ((((1000.0) / ((((c) - (v2))).max(10.0)))).powf(0.2854)))) * ((((v0) / (v3))).powf(((0.28) * (v1)))));
    return ((v4) * ((((((((((3036.0) / (v3))) - (1.78))) * (v1))) * (((1.0) + (((0.448) * (v1))))))).exp()));
}
