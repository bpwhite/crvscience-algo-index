// SPDX-License-Identifier: GPL-3.0-only
#![forbid(unsafe_code)]
#![allow(clippy::needless_return, unused_parens)]

pub fn transform_kernel(a: f64, b: f64, c: f64, d: f64, a4: f64) -> f64 {
    let v0: f64 = ((a4) * (a4));
    let v1: f64 = ((v0) * (a4));
    return ((0.5) * (((((((((2.0) * (b))) + ((((((-(a))) + (c))) * (a4))))) + (((((((((((2.0) * (a))) - (((5.0) * (b))))) + (((4.0) * (c))))) - (d))) * (v0))))) + ((((((((((-(a))) + (((3.0) * (b))))) - (((3.0) * (c))))) + (d))) * (v1))))));
}
