// SPDX-License-Identifier: GPL-3.0-only
#![forbid(unsafe_code)]
#![allow(clippy::needless_return, unused_parens)]

pub fn transform_kernel(a: f64) -> f64 {
    let mut v0: f64 = 0.0;
    if ((a) < (0.0)) {
        v0 = (-(1.0));
    } else {
        v0 = 1.0;
    }
    let v1: f64 = (((a).abs()) / (1.414213562373));
    let v2: f64 = ((1.0) / (((1.0) + (((0.3275911) * (v1))))));
    let v3: f64 = ((1.0) - (((((((((((((((((((((1.061405429) * (v2))) - (1.453152027))) * (v2))) + (1.421413741))) * (v2))) - (0.284496736))) * (v2))) + (0.254829592))) * (v2))) * (((((-(v1))) * (v1))).exp()))));
    return ((0.5) * (((1.0) + (((v0) * (v3))))));
}
