# SPDX-License-Identifier: GPL-3.0-only
from __future__ import annotations
import math


def sample_poisson_icdf(a: float, b: float) -> int:
    if ((a) <= (0.000000000001)):
        return 0
    v0 = min(a, 45.0)
    v1 = math.exp((-(v0)))
    v2 = v1
    if ((b) <= (v2)):
        return 0
    for i in range(1, (96) + 1):
        v1 = ((v1) * (((v0) / (float(i)))))
        v2 = ((v2) + (v1))
        if ((b) <= (v2)):
            return i
    return 96
