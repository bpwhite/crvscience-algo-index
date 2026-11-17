// SPDX-License-Identifier: GPL-3.0-only
#![forbid(unsafe_code)]
#![allow(clippy::needless_return, unused_parens)]

pub fn erfc_approx(a: f64) -> f64 {
    let v0: f64 = (a).abs();
    let v1: f64 = ((1.0) / (((1.0) + (((0.3275911) * (v0))))));
    let v2: f64 = ((v1) * (((0.254829592) + (((v1) * ((((-(0.284496736))) + (((v1) * (((1.421413741) + (((v1) * ((((-(1.453152027))) + (((v1) * (1.061405429))))))))))))))))));
    let v3: f64 = ((v2) * (((((-(v0))) * (v0))).exp()));
    if ((a) >= (0.0)) {
        return v3;
    } else {
        return ((2.0) - (v3));
    }
}
