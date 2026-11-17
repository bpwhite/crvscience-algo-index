# SPDX-License-Identifier: GPL-3.0-only
from __future__ import annotations
import math


def measure_kernel(xs: list[float], ys: list[float]) -> float:
    v0 = min(len(xs), len(ys))
    if ((v0) < (2)):
        return 0.0
    __sum_acc_1 = 0.0
    for i in range(0, v0):
        __sum_acc_1 = ((__sum_acc_1) + (xs[i]))
    v2 = ((__sum_acc_1) / (float(v0)))
    __sum_acc_3 = 0.0
    for j in range(0, v0):
        __sum_acc_3 = ((__sum_acc_3) + (ys[j]))
    v4 = ((__sum_acc_3) / (float(v0)))
    v5 = 0.0
    v6 = 0.0
    v7 = 0.0
    for t in range(0, v0):
        v8 = ((xs[t]) - (v2))
        v9 = ((ys[t]) - (v4))
        v5 = ((v5) + (((v8) * (v9))))
        v6 = ((v6) + (((v8) * (v8))))
        v7 = ((v7) + (((v9) * (v9))))
    v10 = math.sqrt(((v6) * (v7)))
    if ((v10) < (0.000000000001)):
        return 0.0
    else:
        return min(max(((v5) / (v10)), (-(1.0))), 1.0)
