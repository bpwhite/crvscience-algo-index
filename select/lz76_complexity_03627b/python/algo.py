# SPDX-License-Identifier: GPL-3.0-only
from __future__ import annotations


def lz76_complexity(xs: list[int]) -> int:
    v0 = len(xs)
    if ((v0) == (0)):
        return 0
    v1 = 1
    v2 = 1
    v3 = 0
    v4 = 1
    v5 = 1
    while ((((v2) + (v4))) <= (v0)):
        if ((xs[((((v3) + (v4))) - (1))]) == (xs[((((v2) + (v4))) - (1))])):
            v4 = ((v4) + (1))
            if ((((v2) + (v4))) > (v0)):
                v1 = ((v1) + (1))
                break
        else:
            if ((v4) > (v5)):
                v5 = v4
            v3 = ((v3) + (1))
            if ((v3) == (v2)):
                v1 = ((v1) + (1))
                v2 = ((v2) + (v5))
                if ((v2) >= (v0)):
                    break
                v3 = 0
                v4 = 1
                v5 = 1
            else:
                v4 = 1
    return v1
