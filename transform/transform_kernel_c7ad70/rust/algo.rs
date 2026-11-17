// SPDX-License-Identifier: GPL-3.0-only
#![forbid(unsafe_code)]
#![allow(clippy::needless_return, unused_parens)]

pub fn transform_kernel(a: f64) -> f64 {
    let v0: f64 = ((a).max(0.0)).min(40.0);
    return ((((((1800.6) - (((120.1) * (v0))))) + (((((3.7818) * (v0))) * (v0))))) - (((((((0.047608) * (v0))) * (v0))) * (v0))));
}
