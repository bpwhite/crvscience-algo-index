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

pub fn measure_kernel(xs: &[f64], a: f64) -> f64 {
    if (((xs.len() as i64)) == (0i64)) {
        return 0.0;
    }
    let v0: f64 = ((1.0) / ((a).max(0.000001)));
    let mut v1: f64 = -1000000000000000052504760255204420248704468581108159154915854115511802457988908195786371375080447864043704443832883878176942523235360430575644792184786706982848387200926575803737830233794788090059368953234970799945081119038967640880074652742780142494579258788820056842838115669472196386865459400540160.0;
    for i in (0i64)..((xs.len() as i64)) {
        let v2: f64 = xs[(i) as usize];
        let v3: f64 = (((-(v2))) * (v0));
        if ((v3) > (v1)) {
            v1 = v3;
        }
    }
    let mut v4: f64 = 0.0;
    for j in (0i64)..((xs.len() as i64)) {
        let v5: f64 = xs[(j) as usize];
        v4 = ((v4) + (((((((-(v5))) * (v0))) - (v1))).exp()));
    }
    let v6: f64 = ((v1) + ((((v4) / ((((xs.len() as i64)) as f64)))).ln()));
    return (((-(a))) * (v6));
}
