// SPDX-License-Identifier: GPL-3.0-only
#![forbid(unsafe_code)]
#![allow(clippy::needless_return, unused_parens)]

pub fn project_kernel(k: i64, a: f64, m: i64) -> f64 {
    if ((((k) <= (1i64))) || (((m) == (0i64)))) {
        return 1.0;
    }
    let v0: f64 = ((a).max(0.005)).min(0.985);
    let v1: f64 = ((k) as f64);
    let v2: f64 = ((v1) * (v0));
    let mut v3: f64 = 1.0;
    let mut v4: f64 = 1.0;
    for i in (1i64)..(k) {
        v4 = ((v4) * (((v2) / (((i) as f64)))));
        v3 = ((v3) + (v4));
    }
    let v5: f64 = ((v4) * (((v2) / (v1))));
    let v6: f64 = ((v5) / ((((1.0) - (v0))).max(0.000000001)));
    let v7: f64 = ((1.0) / (((v3) + (v6))));
    let mut v8: f64 = v7;
    let mut v9: f64 = 0.0;
    for j in (0i64)..(k) {
        if ((j) > (0i64)) {
            v8 = ((v8) * (((v2) / (((j) as f64)))));
        }
        if ((j) >= (m)) {
            let mut v10: f64 = ((((((k) - (j))) as f64)) / (v1));
            for t in (0i64)..(m) {
                v10 = ((v10) * (((((((j) - (t))) as f64)) / ((((((((k) - (1i64))) - (t))).max(1i64)) as f64)))));
            }
            v9 = ((v9) + (((v8) * (v10))));
        }
    }
    let v11: f64 = (((v0).powf(((m) as f64))) * (((1.0) - (v0))));
    return ((((v9) / ((v11).max(0.000000000001)))).max(0.05)).min(8.0);
}
