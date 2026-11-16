// SPDX-License-Identifier: GPL-3.0-only
#![forbid(unsafe_code)]
#![allow(clippy::needless_return, unused_parens)]

pub fn transform_kernel(a: f64, b: f64) -> f64 {
    if ((a) <= (b)) {
        return (-(745.0));
    }
    let v0: f64 = ((b) - (a));
    if ((v0) < ((-(50.0)))) {
        return a;
    } else {
        return ((a) + (((((1.0) - ((v0).exp()))).max(0.0)).ln()));
    }
}
