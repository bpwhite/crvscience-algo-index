// SPDX-License-Identifier: GPL-3.0-only
#![forbid(unsafe_code)]
#![allow(clippy::needless_return, unused_parens)]

pub fn kl(xs: &[f64], ys: &[f64]) -> f64 {
    let mut v0: f64 = 0.0;
    for i in (0i64)..(4i64) {
        if ((((xs[(i) as usize]) > (0.0))) && (((ys[(i) as usize]) > (0.0)))) {
            v0 = ((v0) + (((xs[(i) as usize]) * ((((((xs[(i) as usize]) / (ys[(i) as usize]))).ln()) / (0.69314718056))))));
        }
    }
    return v0;
}
