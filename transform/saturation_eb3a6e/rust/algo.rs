// SPDX-License-Identifier: GPL-3.0-only
#![forbid(unsafe_code)]
#![allow(clippy::needless_return, unused_parens)]

pub fn saturation(a: f64) -> f64 {
    let v0: f64 = ((((a).max(0.0)).min(40.0)) + (273.15));
    let v1: f64 = (((((((((-(139.34411))) + (((157570.100000000006) / (v0))))) - (((66423080.0) / (((v0) * (v0))))))) + (((12438000000.0) / (((((v0) * (v0))) * (v0))))))) - (((862194900000.0) / (((((((v0) * (v0))) * (v0))) * (v0))))));
    return (v1).exp();
}
