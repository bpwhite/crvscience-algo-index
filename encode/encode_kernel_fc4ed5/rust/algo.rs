// SPDX-License-Identifier: GPL-3.0-only
#![forbid(unsafe_code)]
#![allow(clippy::needless_return, unused_parens)]

pub fn encode_kernel(k: i64, m: i64, q: i64) -> bool {
    if ((q) < (32i64)) {
        return (((((((k) as i32) & (((((((1i64) as i32).wrapping_shl((q) as u32))) as i64)) as i32))) as i64)) != (0i64));
    } else {
        return (((((((m) as i32) & (((((((1i64) as i32).wrapping_shl((((q) - (32i64))) as u32))) as i64)) as i32))) as i64)) != (0i64));
    }
}
