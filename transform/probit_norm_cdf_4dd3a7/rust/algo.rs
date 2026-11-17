// SPDX-License-Identifier: GPL-3.0-only
#![forbid(unsafe_code)]
#![allow(clippy::needless_return, unused_parens)]

pub fn probit_norm_cdf(a: f64) -> f64 {
    let v0: f64 = ((a) / (1.414213562373));
    let mut v1: f64 = 0.0;
    if ((v0) < (0.0)) {
        v1 = (-(1.0));
    } else {
        v1 = 1.0;
    }
    let v2: f64 = (v0).abs();
    let v3: f64 = ((1.0) / (((1.0) + (((0.3275911) * (v2))))));
    let v4: f64 = ((1.0) - (((((((((((((((((((((1.061405429) * (v3))) - (1.453152027))) * (v3))) + (1.421413741))) * (v3))) - (0.284496736))) * (v3))) + (0.254829592))) * (v3))) * (((((-(v2))) * (v2))).exp()))));
    return ((0.5) * (((1.0) + (((v1) * (v4))))));
}
