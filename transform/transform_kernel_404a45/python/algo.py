# SPDX-License-Identifier: GPL-3.0-only
from __future__ import annotations
import math


def transform_kernel(a: float, b: float, c: float, d: float) -> float:
    v0 = max(a, 0.0)
    v1 = min(max(b, 0.0), 1.0)
    v2 = ((min(max(c, 0.0), 1200.0)) / (1000.0))
    v3 = min(max(d, 0.02), 0.85)
    v4 = (((-(3.63))) + (((v0) * (((((((0.41) * (v1))) + (((0.67) * (v2))))) + (((0.7) * (v3))))))))
    if ((v4) >= (35.0)):
        return 1.0
    else:
        if ((v4) <= ((-(35.0)))):
            return 0.0
        else:
            v5 = math.exp(v4)
            return ((v5) / (((1.0) + (v5))))
