// SPDX-License-Identifier: GPL-3.0-only
#![forbid(unsafe_code)]
#![allow(clippy::needless_return, unused_parens)]

pub fn infer_kernel(xs: &[f64]) -> f64 {
    let mut v0: f64 = 0.0;
    let mut v1: f64 = 0.0;
    for i in (0i64)..((xs.len() as i64)) {
        let v2: f64 = xs[(i) as usize];
        let v3: f64 = ((v2) - (v0));
        v1 = ((v1) + (((v3) * (v3))));
        v0 = v2;
    }
    return ((v1) + (((v0) * (v0))));
}
