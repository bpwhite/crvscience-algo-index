# SPDX-License-Identifier: GPL-3.0-only
from __future__ import annotations


def _i32(x: int) -> int:
    x &= 0xFFFFFFFF
    return x - 0x100000000 if x & 0x80000000 else x


def encode_kernel(xs: list[int], k: int) -> int:
    if ((_i32(_i32(xs[_i32(_i32(k) >> (_i32(3) & 31))]) & _i32(_i32(_i32(1) << (_i32(_i32(_i32(k) & _i32(7))) & 31))))) != (0)):
        return 1
    else:
        return 0
