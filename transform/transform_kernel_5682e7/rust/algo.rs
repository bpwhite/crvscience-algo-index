// SPDX-License-Identifier: GPL-3.0-only
#![forbid(unsafe_code)]
#![allow(clippy::needless_return, unused_parens)]

pub fn transform_kernel(k: i64, m: i64, q: i64, p: i64) -> f64 {
    let v0: i64 = (k).max(q);
    let v1: i64 = (m).min(p);
    if ((v1) < (v0)) {
        return 0.0;
    }
    let v2: f64 = ((((((v1) - (v0))) + (1i64))) as f64);
    let v3: f64 = ((((((((((m) - (k))) + (1i64))) + (((((p) - (q))) + (1i64))))) as f64)) - (v2));
    if ((v3) <= (0.0)) {
        return 1.0;
    } else {
        return ((v2) / (v3));
    }
}
