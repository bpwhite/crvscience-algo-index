// SPDX-License-Identifier: GPL-3.0-only
#![forbid(unsafe_code)]
#![allow(clippy::needless_return, unused_parens)]

pub fn binary_entropy(a: f64) -> f64 {
    let v0: f64 = ((a).max(0.0)).min(1.0);
    if ((((v0) <= (0.0))) || (((v0) >= (((1.0) - (0.0)))))) {
        return 0.0;
    }
    return (((((-(v0))) * ((((v0).ln()) / (0.69314718056))))) - (((((1.0) - (v0))) * ((((((1.0) - (v0))).ln()) / (0.69314718056))))));
}
