// SPDX-License-Identifier: GPL-3.0-only
#![forbid(unsafe_code)]
#![allow(clippy::needless_return, unused_parens)]

pub fn shannon_entropy(xs: &[i64]) -> f64 {
    let mut v0: i64 = 0i64;
    for i in (0i64)..((xs.len() as i64)) {
        v0 = ((v0) + (xs[(i) as usize]));
    }
    if ((v0) == (0i64)) {
        return 0.0;
    }
    let v1: f64 = ((v0) as f64);
    let mut v2: f64 = 0.0;
    for j in (0i64)..((xs.len() as i64)) {
        let v3: i64 = xs[(j) as usize];
        if ((v3) > (0i64)) {
            let v4: f64 = ((((v3) as f64)) / (v1));
            v2 = ((v2) - (((v4) * ((((v4).ln()) / (0.69314718056))))));
        }
    }
    return v2;
}
