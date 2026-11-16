// SPDX-License-Identifier: GPL-3.0-only
#![forbid(unsafe_code)]
#![allow(clippy::needless_return, unused_parens)]

pub fn transform_kernel(a: f64, b: f64, c: f64, d: f64) -> f64 {
    let v0: f64 = (a).max(0.0);
    let v1: f64 = (c).max(0.000000001);
    let v2: f64 = (d).max(0.000000001);
    let v3: f64 = ((((v1) + (v0))) + (v2));
    let v4: f64 = ((((((v3) * (v3))) - (((((4.0) * (v1))) * (v0))))).max(0.0)).sqrt();
    let v5: f64 = ((((((v3) - (v4))) / (((2.0) * (v1))))).max(0.0)).min(1.0);
    return ((b) * (((1.0) - (v5))));
}
