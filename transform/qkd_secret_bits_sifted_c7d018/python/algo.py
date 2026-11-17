# SPDX-License-Identifier: GPL-3.0-only
from __future__ import annotations
import math


def qkd_secret_bits_sifted(k: int, a: float) -> float:
    v0 = float(max(k, 2))
    v1 = ((((v0) - (1.0))) / (v0))
    v2 = min(max(a, 0.0), v1)
    if ((v2) <= (0.0)):
        return ((math.log(v0)) / (0.69314718056))
    if ((v2) >= (((v1) - (0.000000000001)))):
        return 0.0
    v3 = (((((-(v2))) * (((math.log(((v2) / (((v0) - (1.0)))))) / (0.69314718056))))) - (((((1.0) - (v2))) * (((math.log(((1.0) - (v2)))) / (0.69314718056))))))
    return max(((((math.log(v0)) / (0.69314718056))) - (((2.0) * (v3)))), 0.0)
