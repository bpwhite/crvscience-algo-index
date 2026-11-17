# SPDX-License-Identifier: GPL-3.0-only
from __future__ import annotations


def raggedness_freqs(xs: list[float]) -> float:
    v0 = 0.0
    v1 = 0.0
    for i in range(0, len(xs)):
        v2 = xs[i]
        v3 = ((v2) - (v0))
        v1 = ((v1) + (((v3) * (v3))))
        v0 = v2
    return ((v1) + (((v0) * (v0))))
