// SPDX-License-Identifier: GPL-3.0-only
#![forbid(unsafe_code)]
#![allow(clippy::needless_return, unused_parens)]

pub fn lz76_complexity(xs: &[i64]) -> i64 {
    let v0: i64 = (xs.len() as i64);
    if ((v0) == (0i64)) {
        return 0i64;
    }
    let mut v1: i64 = 1i64;
    let mut v2: i64 = 1i64;
    let mut v3: i64 = 0i64;
    let mut v4: i64 = 1i64;
    let mut v5: i64 = 1i64;
    while ((((v2) + (v4))) <= (v0)) {
        if ((xs[(((((v3) + (v4))) - (1i64))) as usize]) == (xs[(((((v2) + (v4))) - (1i64))) as usize])) {
            v4 = ((v4) + (1i64));
            if ((((v2) + (v4))) > (v0)) {
                v1 = ((v1) + (1i64));
                break;
            }
        } else {
            if ((v4) > (v5)) {
                v5 = v4;
            }
            v3 = ((v3) + (1i64));
            if ((v3) == (v2)) {
                v1 = ((v1) + (1i64));
                v2 = ((v2) + (v5));
                if ((v2) >= (v0)) {
                    break;
                }
                v3 = 0i64;
                v4 = 1i64;
                v5 = 1i64;
            } else {
                v4 = 1i64;
            }
        }
    }
    return v1;
}
