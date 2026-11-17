# SPDX-License-Identifier: GPL-3.0-only
from __future__ import annotations


def _i32(x: int) -> int:
    x &= 0xFFFFFFFF
    return x - 0x100000000 if x & 0x80000000 else x


def pack_rgba_u32(k: int, m: int, q: int, p: int) -> int:
    return _i32(_i32(_i32(_i32(_i32(_i32(k) | _i32(_i32(_i32(m) << (_i32(8) & 31))))) | _i32(_i32(_i32(q) << (_i32(16) & 31))))) | _i32(_i32(_i32(p) << (_i32(24) & 31))))
