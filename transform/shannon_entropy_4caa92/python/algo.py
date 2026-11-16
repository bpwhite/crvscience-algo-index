# SPDX-License-Identifier: GPL-3.0-only
from __future__ import annotations
import math


def shannon_entropy(xs: list[int]) -> float:
    v0 = 0
    for i in range(0, len(xs)):
        v0 = ((v0) + (xs[i]))
    if ((v0) == (0)):
        return 0.0
    v1 = float(v0)
    v2 = 0.0
    for j in range(0, len(xs)):
        v3 = xs[j]
        if ((v3) > (0)):
            v4 = ((float(v3)) / (v1))
            v2 = ((v2) - (((v4) * (((math.log(v4)) / (0.69314718056))))))
    return v2
