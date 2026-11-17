# SPDX-License-Identifier: GPL-3.0-only
from __future__ import annotations
import math


def transform_kernel(a: float, b: float, c: float, d: float, a4: float, a5: float) -> float:
    v0 = ((a) * (math.cos(d)))
    v1 = ((a) * (math.sin(d)))
    v2 = ((b) - (((c) * (math.cos(a4)))))
    v3 = ((((c) * (math.sin(a4)))) * (math.cos(a5)))
    v4 = ((((c) * (math.sin(a4)))) * (math.sin(a5)))
    v5 = ((v0) - (v2))
    v6 = ((v1) - (v3))
    return math.sqrt(((((((v5) * (v5))) + (((v6) * (v6))))) + (((v4) * (v4)))))
