// SPDX-License-Identifier: GPL-3.0-only
#![forbid(unsafe_code)]
#![allow(clippy::needless_return, unused_parens)]

pub fn transform_kernel(a: f64, b: f64, c: f64, d: f64) -> f64 {
    let v0: f64 = (a).max(0.0);
    let v1: f64 = ((b).max(0.0)).min(1.0);
    let v2: f64 = ((((c).max(0.0)).min(1200.0)) / (1000.0));
    let v3: f64 = ((d).max(0.02)).min(0.85);
    let v4: f64 = (((-(3.63))) + (((v0) * (((((((0.41) * (v1))) + (((0.67) * (v2))))) + (((0.7) * (v3))))))));
    if ((v4) >= (35.0)) {
        return 1.0;
    } else {
        if ((v4) <= ((-(35.0)))) {
            return 0.0;
        } else {
            let v5: f64 = (v4).exp();
            return ((v5) / (((1.0) + (v5))));
        }
    }
}
