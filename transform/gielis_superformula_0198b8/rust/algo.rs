// SPDX-License-Identifier: GPL-3.0-only
#![forbid(unsafe_code)]
#![allow(clippy::needless_return, unused_parens)]

pub fn gielis_superformula(a: f64, b: f64, c: f64, d: f64, a4: f64, a5: f64, a6: f64) -> f64 {
    let v0: f64 = (((((((((b) * (a))) * (0.25))).cos()) / (c))).abs()).powf(a5);
    let v1: f64 = (((((((((b) * (a))) * (0.25))).sin()) / (d))).abs()).powf(a6);
    let v2: f64 = (((v0) + (v1))).max(0.000000001);
    return (v2).powf((((-(1.0))) / ((a4).max(0.1))));
}
