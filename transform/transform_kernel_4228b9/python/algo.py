# SPDX-License-Identifier: GPL-3.0-only
from __future__ import annotations
import math


def transform_kernel(a: float, b: float, c: float, d: float) -> float:
    v0 = float(abs(b))
    if ((((v0) <= (0.000000000001))) or (((a) <= (0.0)))):
        return 0.0
    v1 = ((math.pow(max(c, 40.0), 1.852)) * (math.pow(max(d, 0.05), 4.8704)))
    return ((((((10.67) * (a))) * (math.pow(v0, 1.852)))) / (max(v1, 0.000000000001)))
