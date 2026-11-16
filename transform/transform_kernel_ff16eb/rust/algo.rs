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
    if ((((b) <= (0.0001))) || (((a) <= (0.1)))) {
        return 0.0;
    }
    let v0: f64 = ((((((4.22) + (((0.39) * (((a).max(0.0)).sqrt()))))) + (((0.36) * (((b).max(0.005)).ln()))))) + (((0.13) * (((c).max(5.0)).sqrt()))));
    return (((v0).max((-(5.0)))).min(14.2)).exp();
}
