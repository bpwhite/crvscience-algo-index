// SPDX-License-Identifier: GPL-3.0-or-later
// Copyright (C) 2026 CRV Science Network (https://crvscience.com)
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://gnu.org>.

#![forbid(unsafe_code)]
#![allow(clippy::needless_return, unused_parens)]

pub fn encode_kernel(buf: &mut [i64], k: i64) {
    buf[((((((k) as i32) >> (((3i64) as u32) & 31))) as i64)) as usize] = (((((buf[((((((k) as i32) >> (((3i64) as u32) & 31))) as i64)) as usize]) as i32) | (((((((1i64) as i32).wrapping_shl(((((((k) as i32) & ((7i64) as i32))) as i64)) as u32))) as i64)) as i32))) as i64);
}
