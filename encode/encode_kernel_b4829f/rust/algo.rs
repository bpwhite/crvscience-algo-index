// SPDX-License-Identifier: GPL-3.0-only
#![forbid(unsafe_code)]
#![allow(clippy::needless_return, unused_parens)]

pub fn encode_kernel(buf: &mut [i64], k: i64) {
    buf[((((((k) as i32) >> (((3i64) as u32) & 31))) as i64)) as usize] = (((((buf[((((((k) as i32) >> (((3i64) as u32) & 31))) as i64)) as usize]) as i32) | (((((((1i64) as i32).wrapping_shl(((((((k) as i32) & ((7i64) as i32))) as i64)) as u32))) as i64)) as i32))) as i64);
}
