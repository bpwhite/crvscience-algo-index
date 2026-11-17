// SPDX-License-Identifier: GPL-3.0-only
#![forbid(unsafe_code)]
#![allow(clippy::needless_return, unused_parens)]

pub fn ramp_minimize(a: f64, b: f64, c: f64) -> f64 {
    if ((a) <= (b)) {
        return 1.0;
    } else {
        if ((a) >= (c)) {
            return 0.05;
        } else {
            return ((1.0) - (((0.95) * (((((a) - (b))) / ((((c) - (b))).max(0.000000001)))))));
        }
    }
}
