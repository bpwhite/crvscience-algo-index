# SPDX-License-Identifier: GPL-3.0-only
from __future__ import annotations
import math


def kl(xs: list[float], ys: list[float]) -> float:
    v0 = 0.0
    for i in range(0, 4):
        if ((((xs[i]) > (0.0))) and (((ys[i]) > (0.0)))):
            v0 = ((v0) + (((xs[i]) * (((math.log(((xs[i]) / (ys[i])))) / (0.69314718056))))))
    return v0
