// SPDX-License-Identifier: GPL-3.0-only
#![forbid(unsafe_code)]
#![allow(clippy::needless_return, unused_parens)]

pub fn transform_kernel(a: f64, b: f64, c: f64) -> f64 {
    let v0: f64 = ((a).max(0.0)).min(1.0);
    let v1: f64 = ((((b).max(0.0)).min(1200.0)) / (1000.0));
    let v2: f64 = ((c).max(0.02)).min(0.85);
    let v3: f64 = (((((((0.41) * (v0))) + (((0.67) * (v1))))) + (((0.7) * (v2))))).max(0.0001);
    let v4: f64 = ((3.63) / (v3));
    return ((4.0) * (v4));
}
