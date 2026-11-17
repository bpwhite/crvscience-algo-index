# SPDX-License-Identifier: GPL-3.0-only
from __future__ import annotations
import math


def transform_kernel(a: float) -> float:
    v0 = ((float(abs(a))) / (1.414213562373))
    v1 = ((1.0) / (((1.0) + (((0.3275911) * (v0))))))
    v2 = ((v1) * (((0.254829592) + (((v1) * ((((-(0.284496736))) + (((v1) * (((1.421413741) + (((v1) * ((((-(1.453152027))) + (((v1) * (1.061405429))))))))))))))))))
    v3 = ((v2) * (math.exp((((-(v0))) * (v0)))))
    return min(max(v3, 0.0), 1.0)
