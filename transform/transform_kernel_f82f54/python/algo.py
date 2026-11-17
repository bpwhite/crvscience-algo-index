# SPDX-License-Identifier: GPL-3.0-only
from __future__ import annotations
import math


def transform_kernel(a: float, b: float, c: float) -> float:
    v0 = ((((((999.842594) + (((0.06793952) * (a))))) - (((0.00909529) * (math.pow(a, float(2))))))) + (((0.0001001685) * (math.pow(a, float(3))))))
    v1 = ((((0.824493) - (((0.0040899) * (a))))) * (b))
    v2 = ((0.0045) * (c))
    return ((((v0) + (v1))) + (v2))
