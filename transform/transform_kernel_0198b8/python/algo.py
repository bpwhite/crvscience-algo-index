# SPDX-License-Identifier: GPL-3.0-only
from __future__ import annotations
import math


def transform_kernel(a: float, b: float, c: float, d: float, a4: float, a5: float, a6: float) -> float:
    v0 = math.pow(float(abs(((math.cos(((((b) * (a))) * (0.25)))) / (c)))), a5)
    v1 = math.pow(float(abs(((math.sin(((((b) * (a))) * (0.25)))) / (d)))), a6)
    v2 = max(((v0) + (v1)), 0.000000001)
    return math.pow(v2, (((-(1.0))) / (max(a4, 0.1))))
