# SPDX-License-Identifier: GPL-3.0-only
from __future__ import annotations
import math


def transform_kernel(a: float, k: int, b: float) -> float:
    v0 = float(max(k, 2))
    v1 = min(max(a, ((1.0) / (v0))), 0.999999)
    v2 = ((1.0) - (v1))
    v3 = 0.0
    if ((v2) <= (0.000000001)):
        v3 = 0.0
    else:
        v3 = (-(((((v1) * (((math.log(v1)) / (0.69314718056))))) + (((v2) * (((math.log(((v2) / (((v0) - (1.0)))))) / (0.69314718056))))))))
    v4 = min(max(((1.0) - (((v3) / (((math.log(v0)) / (0.69314718056)))))), 0.0), 1.0)
    return ((b) * (v4))
