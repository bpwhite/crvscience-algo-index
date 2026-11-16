// SPDX-License-Identifier: GPL-3.0-only
#![forbid(unsafe_code)]
#![allow(clippy::needless_return, unused_parens)]

pub fn transform_kernel(a: f64, b: f64) -> f64 {
    if ((a) < (((40.0) * (b)))) {
        let v0: f64 = (((a) / (b))).exp();
        return ((100.0) * (((v0) / (((v0) + (1.0))))));
    } else {
        return 99.99;
    }
}
