// SPDX-License-Identifier: GPL-3.0-only
#![forbid(unsafe_code)]
#![allow(clippy::needless_return, unused_parens)]

pub fn measure_kernel(xs: &[f64], ys: &[f64]) -> f64 {
    let v0: i64 = ((xs.len() as i64)).min((ys.len() as i64));
    if ((v0) < (2i64)) {
        return 1.0;
    }
    let mut __sum_acc_1: f64 = 0.0;
    for i in (0i64)..((xs.len() as i64)) {
        __sum_acc_1 = ((__sum_acc_1) + (xs[(i) as usize]));
    }
    let v2: f64 = ((__sum_acc_1) / (((v0) as f64)));
    let mut __sum_acc_3: f64 = 0.0;
    for j in (0i64)..((ys.len() as i64)) {
        __sum_acc_3 = ((__sum_acc_3) + (ys[(j) as usize]));
    }
    let v4: f64 = ((__sum_acc_3) / (((v0) as f64)));
    let mut v5: f64 = 0.0;
    let mut v6: f64 = 0.0;
    let mut v7: f64 = 0.0;
    for t in (0i64)..(v0) {
        let v8: f64 = ((xs[(t) as usize]) - (v2));
        let v9: f64 = ((ys[(t) as usize]) - (v4));
        v5 = ((v5) + (((v8) * (v9))));
        v6 = ((v6) + (((v8) * (v8))));
        v7 = ((v7) + (((v9) * (v9))));
    }
    let v10: f64 = (((v6) * (v7))).sqrt();
    if ((v10) <= (0.0)) {
        return 1.0;
    } else {
        return ((((v5) / (v10))).max((-(1.0)))).min(1.0);
    }
}
