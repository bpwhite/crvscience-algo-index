// SPDX-License-Identifier: GPL-3.0-only
#![forbid(unsafe_code)]
#![allow(clippy::needless_return, unused_parens)]

pub fn encode_kernel(k: i64, m: i64, q: i64, p: i64) -> i64 {
    return (((((((((((((((k) as i32) | (((((((m) as i32).wrapping_shl((8i64) as u32))) as i64)) as i32))) as i64)) as i32) | (((((((q) as i32).wrapping_shl((16i64) as u32))) as i64)) as i32))) as i64)) as i32) | (((((((p) as i32).wrapping_shl((24i64) as u32))) as i64)) as i32))) as i64);
}
