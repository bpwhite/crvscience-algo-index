# SPDX-License-Identifier: GPL-3.0-only
from __future__ import annotations


def ramp_maximize(a: float, b: float, c: float) -> float:
    if ((a) <= (b)):
        return 0.05
    else:
        if ((a) >= (c)):
            return 1.0
        else:
            return ((0.05) + (((0.95) * (((((a) - (b))) / (max(((c) - (b)), 0.000000001)))))))
