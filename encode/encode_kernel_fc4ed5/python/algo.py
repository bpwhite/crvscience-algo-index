# SPDX-License-Identifier: GPL-3.0-only
from __future__ import annotations


def _i32(x: int) -> int:
    x &= 0xFFFFFFFF
    return x - 0x100000000 if x & 0x80000000 else x


def encode_kernel(k: int, m: int, q: int) -> bool:
    if ((q) < (32)):
        return ((_i32(_i32(k) & _i32(_i32(_i32(1) << (_i32(q) & 31))))) != (0))
    else:
        return ((_i32(_i32(m) & _i32(_i32(_i32(1) << (_i32(((q) - (32))) & 31))))) != (0))
