# SPDX-License-Identifier: GPL-3.0-only
from __future__ import annotations


def similarity(xs: list[float], ys: list[float]) -> float:
    v0 = min(len(xs), len(ys))
    if ((v0) == (0)):
        return 0.0
    v1 = 0.0
    for i in range(0, v0):
        v1 = ((v1) + (float(abs(((xs[i]) - (ys[i]))))))
    return ((1.0) / (((1.0) + (((v1) / (float(v0)))))))
