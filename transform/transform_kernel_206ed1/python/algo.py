# SPDX-License-Identifier: GPL-3.0-only
from __future__ import annotations


def transform_kernel(flag0: bool, a: float, b: float, c: float) -> float:
    if (not (flag0)):
        return 0.0
    v0 = ((((((1.0) - (min(max(a, 0.0), 1.0)))) * (((1.0) - (min(max(b, 0.0), 1.0)))))) * (((1.0) - (min(max(c, 0.0), 1.0)))))
    return min(max(((1.0) - (v0)), 0.0), 1.0)
