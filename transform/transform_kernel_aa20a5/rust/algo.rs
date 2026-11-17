// SPDX-License-Identifier: GPL-3.0-only
#![forbid(unsafe_code)]
#![allow(clippy::needless_return, unused_parens)]

pub fn transform_kernel(a: f64, b: f64, c: f64) -> f64 {
    if (((((a).abs()) <= (0.03))) && ((((b).abs()) <= (0.03)))) {
        return 0.0;
    } else {
        if ((b) < ((-(0.02)))) {
            return ((((0.42) + (((0.55) * ((-(b))))))).max(0.35)).min(0.92);
        } else {
            let v0: f64 = ((1.0) / (((1.0) + (((0.65) * ((c).max(0.0)))))));
            return ((((((0.042) / (((0.55) + (b))))) * (v0))).max(0.008)).min(0.065);
        }
    }
}
