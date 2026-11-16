# SPDX-License-Identifier: GPL-3.0-only
from __future__ import annotations
import math


def transform_kernel(a: float) -> float:
    v0 = 0.0
    if ((a) < (0.0)):
        v0 = (-(1.0))
    else:
        v0 = 1.0
    v1 = float(abs(a))
    v2 = ((1.0) / (((1.0) + (((0.3275911) * (v1))))))
    v3 = ((1.0) - (((((((((((((((((((((1.061405429) * (v2))) - (1.453152027))) * (v2))) + (1.421413741))) * (v2))) - (0.284496736))) * (v2))) + (0.254829592))) * (v2))) * (math.exp((((-(v1))) * (v1)))))))
    return ((v0) * (v3))
