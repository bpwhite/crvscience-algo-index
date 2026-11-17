# SPDX-License-Identifier: GPL-3.0-only
from __future__ import annotations


def transform_kernel(a: float, b: float, c: float) -> float:
    if ((((float(abs(a))) <= (0.03))) and (((float(abs(b))) <= (0.03)))):
        return 0.0
    else:
        if ((b) < ((-(0.02)))):
            return min(max(((0.42) + (((0.55) * ((-(b)))))), 0.35), 0.92)
        else:
            v0 = ((1.0) / (((1.0) + (((0.65) * (max(c, 0.0)))))))
            return min(max(((((0.042) / (((0.55) + (b))))) * (v0)), 0.008), 0.065)
