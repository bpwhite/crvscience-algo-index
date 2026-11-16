// SPDX-License-Identifier: GPL-3.0-only
#![forbid(unsafe_code)]
#![allow(clippy::needless_return, unused_parens)]

pub fn transform_kernel(k: i64, a: f64) -> f64 {
    let v0: f64 = ((a).max(0.5)).min(3.0);
    let v1: f64 = ((((((k).max(40i64)) as f64)).ln()) / (2.302585092994));
    let v2: f64 = (((4.35) - (((0.28) * (((v0) - (1.0))))))).max(3.4);
    let v3: f64 = (((1.75) - (((0.15) * (((v0) - (1.0))))))).max(1.3);
    let v4: f64 = ((((v2) - (v1))) / (((v2) - (v3))));
    return ((v4).max(0.03)).min(0.96);
}
