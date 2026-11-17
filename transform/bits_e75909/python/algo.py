# SPDX-License-Identifier: GPL-3.0-only
from __future__ import annotations


def bits(a: float, b: float, c: float, k: int) -> float:
    v0 = 2.0
    v1 = 0.0
    if ((k) <= (1)):
        v1 = 0.0
    else:
        v1 = ((float(k)) / (((float(k)) + (8.0))))
    v2 = min(max(((((((1.0) - (v1))) * (min(max(b, 0.05), 1.0)))) + (((v1) * (min(max(c, 0.08), 1.0))))), 0.06), 1.0)
    return ((v0) + (((max(((a) - (v0)), 0.0)) * (v2))))
