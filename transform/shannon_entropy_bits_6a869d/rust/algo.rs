// SPDX-License-Identifier: GPL-3.0-only
#![forbid(unsafe_code)]
#![allow(clippy::needless_return, unused_parens)]

pub fn shannon_entropy_bits(xs: &[i64]) -> f64 {
    let mut __sum_acc_0: i64 = 0i64;
    for i in (0i64)..((xs.len() as i64)) {
        __sum_acc_0 = ((__sum_acc_0) + (xs[(i) as usize]));
    }
    let v1: i64 = __sum_acc_0;
    if ((v1) == (0i64)) {
        return 0.0;
    }
    let v2: f64 = ((v1) as f64);
    let mut v3: f64 = 0.0;
    for j in (0i64)..((xs.len() as i64)) {
        let v4: i64 = xs[(j) as usize];
        if ((v4) > (0i64)) {
            let v5: f64 = ((((v4) as f64)) / (v2));
            v3 = ((v3) - (((v5) * ((((v5).ln()) / (0.69314718056))))));
        }
    }
    return v3;
}
