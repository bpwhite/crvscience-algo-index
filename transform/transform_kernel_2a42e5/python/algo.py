# SPDX-License-Identifier: GPL-3.0-only
from __future__ import annotations
import math


def transform_kernel(a: float, b: float) -> float:
    if ((a) <= (((1.0) / (3.0)))):
        return 0.0
    v0 = 0.0
    if ((a) >= (0.999999)):
        v0 = ((((b) + (0.5))) / (((b) + (1.5))))
    else:
        v0 = a
    v1 = ((1.5) * (((1.0) - (v0))))
    if ((v1) <= (0.000000001)):
        return 6.0
    else:
        return max((-(math.log(v1))), 0.0)
