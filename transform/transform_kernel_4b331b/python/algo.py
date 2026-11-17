# SPDX-License-Identifier: GPL-3.0-only
from __future__ import annotations
import math


def transform_kernel(a: float, b: float, c: float) -> float:
    v0 = max(((a) + (273.15)), 180.0)
    v1 = min(max(((b) / (max(((1.0) - (b)), 0.9))), 0.000001), 0.05)
    v2 = max(((((c) * (v1))) / (((0.622) + (v1)))), 0.0001)
    v3 = ((((2840.0) / (((((((3.5) * (math.log(v0)))) - (math.log(v2)))) - (4.805))))) + (55.0))
    v4 = ((((v0) * (math.pow(((1000.0) / (max(((c) - (v2)), 10.0))), 0.2854)))) * (math.pow(((v0) / (v3)), ((0.28) * (v1)))))
    return ((v4) * (math.exp(((((((((3036.0) / (v3))) - (1.78))) * (v1))) * (((1.0) + (((0.448) * (v1)))))))))
