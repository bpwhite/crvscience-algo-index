// SPDX-License-Identifier: GPL-3.0-only
#![forbid(unsafe_code)]
#![allow(clippy::needless_return, unused_parens)]

pub fn density(a: f64, b: f64, c: f64) -> f64 {
    let v0: f64 = ((((((999.842594) + (((0.06793952) * (a))))) - (((0.00909529) * ((a).powf(((2i64) as f64))))))) + (((0.0001001685) * ((a).powf(((3i64) as f64))))));
    let v1: f64 = ((((0.824493) - (((0.0040899) * (a))))) * (b));
    let v2: f64 = ((0.0045) * (c));
    return ((((v0) + (v1))) + (v2));
}
