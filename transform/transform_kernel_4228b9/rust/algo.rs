// SPDX-License-Identifier: GPL-3.0-only
#![forbid(unsafe_code)]
#![allow(clippy::needless_return, unused_parens)]

pub fn transform_kernel(a: f64, b: f64, c: f64, d: f64) -> f64 {
    let v0: f64 = (b).abs();
    if ((((v0) <= (0.000000000001))) || (((a) <= (0.0)))) {
        return 0.0;
    }
    let v1: f64 = ((((c).max(40.0)).powf(1.852)) * (((d).max(0.05)).powf(4.8704)));
    return ((((((10.67) * (a))) * ((v0).powf(1.852)))) / ((v1).max(0.000000000001)));
}
