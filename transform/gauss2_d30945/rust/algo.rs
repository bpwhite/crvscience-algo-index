// SPDX-License-Identifier: GPL-3.0-only
#![forbid(unsafe_code)]
#![allow(clippy::needless_return, unused_parens)]

pub fn gauss2(a: f64, b: f64, c: f64, d: f64, a4: f64, a5: f64) -> f64 {
    let mut v0: f64 = ((b) - (d));
    if ((v0) > (180.0)) {
        v0 = ((v0) - (360.0));
    } else {
        if ((v0) < ((-(180.0)))) {
            v0 = ((v0) + (360.0));
        }
    }
    let v1: f64 = ((((a) - (c))) / (a4));
    let v2: f64 = ((v0) / (a5));
    return ((-(((((v1) * (v1))) + (((v2) * (v2))))))).exp();
}
