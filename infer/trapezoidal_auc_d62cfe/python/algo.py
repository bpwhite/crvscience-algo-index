# SPDX-License-Identifier: GPL-3.0-only
from __future__ import annotations


def trapezoidal_auc(xs: list[float], ys: list[float]) -> float:
    v0 = 0.0
    for i in range(1, min(len(xs), len(ys))):
        v1 = ((xs[i]) - (xs[((i) - (1))]))
        if ((v1) > (0.0)):
            v0 = ((v0) + (((((0.5) * (((ys[((i) - (1))]) + (ys[i]))))) * (v1))))
    return v0
