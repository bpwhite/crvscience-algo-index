// SPDX-License-Identifier: GPL-3.0-only
#![forbid(unsafe_code)]
#![allow(clippy::needless_return, unused_parens)]

pub fn bessel_i0(a: f64) -> f64 {
    let mut v0: f64 = 1.0;
    let mut v1: f64 = 1.0;
    let v2: f64 = ((((0.25) * (a))) * (a));
    for i in (1i64)..(28i64) {
        v1 = ((v1) * (((v2) / (((((i) * (i))) as f64)))));
        v0 = ((v0) + (v1));
        if ((v1) < (((0.0) * (v0)))) {
            break;
        }
    }
    return v0;
}
