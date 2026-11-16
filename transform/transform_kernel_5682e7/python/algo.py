# SPDX-License-Identifier: GPL-3.0-only
from __future__ import annotations


def transform_kernel(k: int, m: int, q: int, p: int) -> float:
    v0 = max(k, q)
    v1 = min(m, p)
    if ((v1) < (v0)):
        return 0.0
    v2 = float(((((v1) - (v0))) + (1)))
    v3 = ((float(((((((m) - (k))) + (1))) + (((((p) - (q))) + (1)))))) - (v2))
    if ((v3) <= (0.0)):
        return 1.0
    else:
        return ((v2) / (v3))
