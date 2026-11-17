// SPDX-License-Identifier: GPL-3.0-only
#![forbid(unsafe_code)]
#![allow(clippy::needless_return, unused_parens)]

pub fn qkd_secret_bits_sifted(k: i64, a: f64) -> f64 {
    let v0: f64 = (((k).max(2i64)) as f64);
    let v1: f64 = ((((v0) - (1.0))) / (v0));
    let v2: f64 = ((a).max(0.0)).min(v1);
    if ((v2) <= (0.0)) {
        return (((v0).ln()) / (0.69314718056));
    }
    if ((v2) >= (((v1) - (0.000000000001)))) {
        return 0.0;
    }
    let v3: f64 = (((((-(v2))) * ((((((v2) / (((v0) - (1.0))))).ln()) / (0.69314718056))))) - (((((1.0) - (v2))) * ((((((1.0) - (v2))).ln()) / (0.69314718056))))));
    return ((((((v0).ln()) / (0.69314718056))) - (((2.0) * (v3))))).max(0.0);
}
