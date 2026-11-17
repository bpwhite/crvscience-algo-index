# SPDX-License-Identifier: GPL-3.0-only
from __future__ import annotations
import math


def shannon_entropy(xs: list[int]) -> float:
    __sum_acc_0 = 0
    for i in range(0, len(xs)):
        __sum_acc_0 = ((__sum_acc_0) + (xs[i]))
    v1 = __sum_acc_0
    if ((v1) == (0)):
        return 0.0
    v2 = float(v1)
    v3 = 0.0
    for j in range(0, len(xs)):
        v4 = xs[j]
        if ((v4) > (0)):
            v5 = ((float(v4)) / (v2))
            v3 = ((v3) - (((v5) * (((math.log(v5)) / (0.69314718056))))))
    return v3
