// SPDX-License-Identifier: GPL-3.0-only
#![forbid(unsafe_code)]
#![allow(clippy::needless_return, unused_parens)]

pub fn transform_kernel(a: f64) -> f64 {
    if ((a) >= (0.0)) {
        return ((1.0) / (((1.0) + (((-(a))).exp()))));
    } else {
        let v0: f64 = (a).exp();
        return ((v0) / (((1.0) + (v0))));
    }
}
