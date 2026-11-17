// SPDX-License-Identifier: GPL-3.0-only
#![forbid(unsafe_code)]
#![allow(clippy::needless_return, unused_parens)]

pub fn bits(a: f64, b: f64, c: f64, k: i64) -> f64 {
    let v0: f64 = 2.0;
    let mut v1: f64 = 0.0;
    if ((k) <= (1i64)) {
        v1 = 0.0;
    } else {
        v1 = ((((k) as f64)) / (((((k) as f64)) + (8.0))));
    }
    let v2: f64 = ((((((((1.0) - (v1))) * (((b).max(0.05)).min(1.0)))) + (((v1) * (((c).max(0.08)).min(1.0)))))).max(0.06)).min(1.0);
    return ((v0) + ((((((a) - (v0))).max(0.0)) * (v2))));
}
