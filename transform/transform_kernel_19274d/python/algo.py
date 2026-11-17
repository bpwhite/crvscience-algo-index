# SPDX-License-Identifier: GPL-3.0-only
from __future__ import annotations
import math


def transform_kernel(a: float) -> float:
    v0 = float(abs(a))
    v1 = ((1.0) / (((1.0) + (((0.3275911) * (v0))))))
    v2 = ((v1) * (((0.254829592) + (((v1) * ((((-(0.284496736))) + (((v1) * (((1.421413741) + (((v1) * ((((-(1.453152027))) + (((v1) * (1.061405429))))))))))))))))))
    v3 = ((v2) * (math.exp((((-(v0))) * (v0)))))
    if ((a) >= (0.0)):
        return v3
    else:
        return ((2.0) - (v3))
