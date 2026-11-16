// SPDX-License-Identifier: GPL-3.0-only
#![forbid(unsafe_code)]
#![allow(clippy::needless_return, unused_parens)]

pub fn transform_kernel(k: i64) -> i64 {
    if ((k) < (15i64)) {
        return 3i64;
    }
    let v0: f64 = ((k) as f64);
    let mut v1: f64 = 1.0;
    let mut v2: i64 = 1i64;
    for i in (1i64)..=(35i64) {
        let v3: f64 = ((i) as f64);
        let v4: f64 = ((1.0) - (((((v3) * (((v3) + (1.0))))) / ((((2.5) * (v0))).max(20.0)))));
        if ((v4) <= (0.0)) {
            break;
        }
        v1 = ((v1) * (v4));
        if ((v1) >= (0.95)) {
            v2 = i;
        } else {
            break;
        }
    }
    return (v2).max(2i64);
}
