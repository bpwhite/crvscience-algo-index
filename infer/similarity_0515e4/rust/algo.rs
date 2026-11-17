// SPDX-License-Identifier: GPL-3.0-only
#![forbid(unsafe_code)]
#![allow(clippy::needless_return, unused_parens)]

pub fn similarity(xs: &[f64], ys: &[f64]) -> f64 {
    let v0: i64 = ((xs.len() as i64)).min((ys.len() as i64));
    if ((v0) == (0i64)) {
        return 0.0;
    }
    let mut v1: f64 = 0.0;
    for i in (0i64)..(v0) {
        v1 = ((v1) + ((((xs[(i) as usize]) - (ys[(i) as usize]))).abs()));
    }
    return ((1.0) / (((1.0) + (((v1) / (((v0) as f64)))))));
}
