# SPDX-License-Identifier: GPL-3.0-only
from __future__ import annotations
import math


def transform_kernel(k: int, m: int, q: int) -> float:
    if ((k) < (20)):
        return 0.5
    v0 = ((float(m)) / (float(k)))
    v1 = ((float(q)) / (float(k)))
    v2 = max(((((1.0) - (((2.0) * (v0))))) - (v1)), 0.01)
    v3 = max(((1.0) - (((2.0) * (v1)))), 0.01)
    return min(max((((((-(0.5))) * (math.log(v2)))) - (((0.25) * (math.log(v3))))), 0.0), 1.5)
