// SPDX-License-Identifier: GPL-3.0-only
#![forbid(unsafe_code)]
#![allow(clippy::needless_return, unused_parens)]

pub fn transform_kernel(a: f64, b: f64, c: f64) -> f64 {
    if ((((b) <= (0.0001))) || (((a) <= (0.1)))) {
        return 0.0;
    }
    let v0: f64 = ((((((4.22) + (((0.39) * (((a).max(0.0)).sqrt()))))) + (((0.36) * (((b).max(0.005)).ln()))))) + (((0.13) * (((c).max(5.0)).sqrt()))));
    return (((v0).max((-(5.0)))).min(14.2)).exp();
}
