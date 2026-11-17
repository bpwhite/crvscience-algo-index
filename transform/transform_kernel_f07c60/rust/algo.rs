// SPDX-License-Identifier: GPL-3.0-only
#![forbid(unsafe_code)]
#![allow(clippy::needless_return, unused_parens)]

pub fn transform_kernel(a: f64, k: i64, b: f64) -> f64 {
    let v0: f64 = (((k).max(2i64)) as f64);
    let v1: f64 = ((a).max(((1.0) / (v0)))).min(0.999999);
    let v2: f64 = ((1.0) - (v1));
    let mut v3: f64 = 0.0;
    if ((v2) <= (0.000000001)) {
        v3 = 0.0;
    } else {
        v3 = (-(((((v1) * ((((v1).ln()) / (0.69314718056))))) + (((v2) * ((((((v2) / (((v0) - (1.0))))).ln()) / (0.69314718056))))))));
    }
    let v4: f64 = ((((1.0) - (((v3) / ((((v0).ln()) / (0.69314718056))))))).max(0.0)).min(1.0);
    return ((b) * (v4));
}
