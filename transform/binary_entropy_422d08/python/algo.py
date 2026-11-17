# SPDX-License-Identifier: GPL-3.0-only
from __future__ import annotations
import math


def binary_entropy(a: float) -> float:
    v0 = min(max(a, 0.0), 1.0)
    if ((((v0) <= (0.0))) or (((v0) >= (((1.0) - (0.0)))))):
        return 0.0
    return (((((-(v0))) * (((math.log(v0)) / (0.69314718056))))) - (((((1.0) - (v0))) * (((math.log(((1.0) - (v0)))) / (0.69314718056))))))
