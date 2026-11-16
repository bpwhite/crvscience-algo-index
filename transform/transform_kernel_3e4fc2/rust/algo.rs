// SPDX-License-Identifier: GPL-3.0-only
#![forbid(unsafe_code)]
#![allow(clippy::needless_return, unused_parens)]

pub fn transform_kernel(a: f64) -> f64 {
    let mut v0: f64 = a;
    while ((v0) > (180.0)) {
        v0 = ((v0) - (360.0));
    }
    while ((v0) < ((-(180.0)))) {
        v0 = ((v0) + (360.0));
    }
    return v0;
}
