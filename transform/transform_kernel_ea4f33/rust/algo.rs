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

pub fn transform_kernel(a: f64, b: f64, c: f64, d: f64, a4: f64, a5: f64) -> f64 {
    let v0: f64 = ((a) * ((d).cos()));
    let v1: f64 = ((a) * ((d).sin()));
    let v2: f64 = ((b) - (((c) * ((a4).cos()))));
    let v3: f64 = ((((c) * ((a4).sin()))) * ((a5).cos()));
    let v4: f64 = ((((c) * ((a4).sin()))) * ((a5).sin()));
    let v5: f64 = ((v0) - (v2));
    let v6: f64 = ((v1) - (v3));
    return (((((((v5) * (v5))) + (((v6) * (v6))))) + (((v4) * (v4))))).sqrt();
}
