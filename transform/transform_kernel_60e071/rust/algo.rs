// SPDX-License-Identifier: GPL-3.0-only
#![forbid(unsafe_code)]
#![allow(clippy::needless_return, unused_parens)]

pub fn transform_kernel(a: f64, b: f64, c: f64) -> f64 {
    if ((((((a) <= (b))) || (((b) <= (0.0))))) || (((((c) - (b))) <= (0.0)))) {
        return 0.0;
    }
    let v0: f64 = (((c) - (a))).max(0.0);
    let v1: f64 = ((c) - (b));
    let v2: f64 = ((a) * ((((a) / (b))).ln()));
    let mut v3: f64 = 0.0;
    if ((v0) > (0.0)) {
        v3 = ((v0) * ((((v0) / (v1))).ln()));
    } else {
        v3 = 0.0;
    }
    return (((v2) + (v3))).max(0.0);
}
