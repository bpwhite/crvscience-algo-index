// SPDX-License-Identifier: GPL-3.0-only
#![forbid(unsafe_code)]
#![allow(clippy::needless_return, unused_parens)]

pub fn trapezoidal_auc(xs: &[f64], ys: &[f64]) -> f64 {
    let mut v0: f64 = 0.0;
    for i in (1i64)..(((xs.len() as i64)).min((ys.len() as i64))) {
        let v1: f64 = ((xs[(i) as usize]) - (xs[(((i) - (1i64))) as usize]));
        if ((v1) > (0.0)) {
            v0 = ((v0) + (((((0.5) * (((ys[(((i) - (1i64))) as usize]) + (ys[(i) as usize]))))) * (v1))));
        }
    }
    return v0;
}
