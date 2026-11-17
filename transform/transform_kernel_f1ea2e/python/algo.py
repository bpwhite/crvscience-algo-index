# SPDX-License-Identifier: GPL-3.0-only
from __future__ import annotations


def transform_kernel(k: int) -> int:
    if ((k) < (15)):
        return 3
    v0 = float(k)
    v1 = 1.0
    v2 = 1
    for i in range(1, (35) + 1):
        v3 = float(i)
        v4 = ((1.0) - (((((v3) * (((v3) + (1.0))))) / (max(((2.5) * (v0)), 20.0)))))
        if ((v4) <= (0.0)):
            break
        v1 = ((v1) * (v4))
        if ((v1) >= (0.95)):
            v2 = i
        else:
            break
    return max(v2, 2)
