// SPDX-License-Identifier: GPL-3.0-only
#![forbid(unsafe_code)]
#![allow(clippy::needless_return, unused_parens)]

pub fn aicc(k: i64, a: f64, m: i64) -> f64 {
    let v0: f64 = ((k) as f64);
    let v1: f64 = ((m) as f64);
    let v2: f64 = (((a) / ((v0).max(1.0)))).max(0.0);
    let v3: f64 = ((((v0) * ((v2).ln()))) + (((2.0) * (v1))));
    if ((k) > (((m) + (1i64)))) {
        return ((v3) + (((((((2.0) * (v1))) * (((v1) + (1.0))))) / (((((((k) - (m))) - (1i64))) as f64)))));
    } else {
        return ((v3) + (100.0));
    }
}
