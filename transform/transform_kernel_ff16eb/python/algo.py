# SPDX-License-Identifier: GPL-3.0-only
from __future__ import annotations
import math


def transform_kernel(a: float, b: float, c: float) -> float:
    if ((((b) <= (0.0001))) or (((a) <= (0.1)))):
        return 0.0
    v0 = ((((((4.22) + (((0.39) * (math.sqrt(max(a, 0.0))))))) + (((0.36) * (math.log(max(b, 0.005))))))) + (((0.13) * (math.sqrt(max(c, 5.0))))))
    return math.exp(min(max(v0, (-(5.0))), 14.2))
