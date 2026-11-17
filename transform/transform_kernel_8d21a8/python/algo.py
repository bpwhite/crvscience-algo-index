# SPDX-License-Identifier: GPL-3.0-only
from __future__ import annotations
import math


def transform_kernel(a: float, b: float, c: float, d: float) -> float:
    v0 = max(a, 0.0)
    v1 = max(c, 0.000000001)
    v2 = max(d, 0.000000001)
    v3 = ((((v1) + (v0))) + (v2))
    v4 = math.sqrt(max(((((v3) * (v3))) - (((((4.0) * (v1))) * (v0)))), 0.0))
    v5 = min(max(((((v3) - (v4))) / (((2.0) * (v1)))), 0.0), 1.0)
    return ((b) * (((1.0) - (v5))))
