// SPDX-License-Identifier: GPL-3.0-only
#![forbid(unsafe_code)]
#![allow(clippy::needless_return, unused_parens)]

pub fn transform_kernel(flag0: bool, a: f64, b: f64, c: f64) -> f64 {
    if (!(flag0)) {
        return 0.0;
    }
    let v0: f64 = ((((((1.0) - (((a).max(0.0)).min(1.0)))) * (((1.0) - (((b).max(0.0)).min(1.0)))))) * (((1.0) - (((c).max(0.0)).min(1.0)))));
    return ((((1.0) - (v0))).max(0.0)).min(1.0);
}
