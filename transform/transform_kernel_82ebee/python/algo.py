# SPDX-License-Identifier: GPL-3.0-only
from __future__ import annotations


def transform_kernel(a: float, b: float, c: float) -> float:
    v0 = min(max(a, 0.0), 1.0)
    v1 = ((min(max(b, 0.0), 1200.0)) / (1000.0))
    v2 = min(max(c, 0.02), 0.85)
    v3 = max(((((((0.41) * (v0))) + (((0.67) * (v1))))) + (((0.7) * (v2)))), 0.0001)
    v4 = ((3.63) / (v3))
    return ((4.0) * (v4))
