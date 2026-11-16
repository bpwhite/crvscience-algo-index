// SPDX-License-Identifier: GPL-3.0-only
#![forbid(unsafe_code)]
#![allow(clippy::needless_return, unused_parens)]

pub fn transform_kernel(a: f64, b: f64) -> f64 {
    if ((a) <= (((1.0) / (3.0)))) {
        return 0.0;
    }
    let mut v0: f64 = 0.0;
    if ((a) >= (0.999999)) {
        v0 = ((((b) + (0.5))) / (((b) + (1.5))));
    } else {
        v0 = a;
    }
    let v1: f64 = ((1.5) * (((1.0) - (v0))));
    if ((v1) <= (0.000000001)) {
        return 6.0;
    } else {
        return ((-((v1).ln()))).max(0.0);
    }
}
