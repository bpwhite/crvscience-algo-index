// SPDX-License-Identifier: GPL-3.0-only
#![forbid(unsafe_code)]
#![allow(clippy::needless_return, unused_parens)]

pub fn sorted_quantile(xs: &[f64], a: f64) -> f64 {
    if (((xs.len() as i64)) == (0i64)) {
        return 0.0;
    }
    let v0: f64 = ((((a).max(0.0)).min(1.0)) * ((((((xs.len() as i64)) - (1i64))) as f64)));
    let v1: i64 = (((v0).floor()) as i64);
    let v2: i64 = (((v0).ceil()) as i64);
    let v3: f64 = ((v0) - (((v1) as f64)));
    return ((((xs[(v1) as usize]) * (((1.0) - (v3))))) + (((xs[(v2) as usize]) * (v3))));
}
