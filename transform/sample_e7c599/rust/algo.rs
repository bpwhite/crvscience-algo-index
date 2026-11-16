// SPDX-License-Identifier: GPL-3.0-only
#![forbid(unsafe_code)]
#![allow(clippy::needless_return, unused_parens)]

pub fn sample(a: f64, b: f64) -> i64 {
    if ((a) <= (0.000000000001)) {
        return 0i64;
    }
    let v0: f64 = (a).min(45.0);
    let mut v1: f64 = ((-(v0))).exp();
    let mut v2: f64 = v1;
    if ((b) <= (v2)) {
        return 0i64;
    }
    for i in (1i64)..=(96i64) {
        v1 = ((v1) * (((v0) / (((i) as f64)))));
        v2 = ((v2) + (v1));
        if ((b) <= (v2)) {
            return i;
        }
    }
    return 96i64;
}
