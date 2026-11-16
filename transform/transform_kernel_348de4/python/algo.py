# SPDX-License-Identifier: GPL-3.0-only
from __future__ import annotations
import math


def transform_kernel(a: float) -> float:
    if ((a) <= (0.0)):
        return 1.0
    v0 = math.sqrt(((0.5) * (a)))
    v1 = ((1.0) / (((1.0) + (((0.3275911) * (v0))))))
    v2 = ((v1) * (((0.254829592) + (((v1) * ((((-(0.284496736))) + (((v1) * (((1.421413741) + (((v1) * ((((-(1.453152027))) + (((v1) * (1.061405429))))))))))))))))))
    return min(max(((v2) * (math.exp((((-(v0))) * (v0))))), 0.0), 1.0)
