# SPDX-License-Identifier: GPL-3.0-only
from __future__ import annotations


def bessel_i0(a: float) -> float:
    v0 = 1.0
    v1 = 1.0
    v2 = ((((0.25) * (a))) * (a))
    for i in range(1, 28):
        v1 = ((v1) * (((v2) / (float(((i) * (i)))))))
        v0 = ((v0) + (v1))
        if ((v1) < (((0.0) * (v0)))):
            break
    return v0
