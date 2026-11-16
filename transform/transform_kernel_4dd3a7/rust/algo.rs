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

pub fn transform_kernel(a: f64) -> f64 {
    let v0: f64 = ((a) / (1.414213562373));
    let mut v1: f64 = 0.0;
    if ((v0) < (0.0)) {
        v1 = (-(1.0));
    } else {
        v1 = 1.0;
    }
    let v2: f64 = (v0).abs();
    let v3: f64 = ((1.0) / (((1.0) + (((0.3275911) * (v2))))));
    let v4: f64 = ((1.0) - (((((((((((((((((((((1.061405429) * (v3))) - (1.453152027))) * (v3))) + (1.421413741))) * (v3))) - (0.284496736))) * (v3))) + (0.254829592))) * (v3))) * (((((-(v2))) * (v2))).exp()))));
    return ((0.5) * (((1.0) + (((v1) * (v4))))));
}
