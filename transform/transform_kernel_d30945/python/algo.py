# SPDX-License-Identifier: GPL-3.0-only
from __future__ import annotations
import math


def transform_kernel(a: float, b: float, c: float, d: float, a4: float, a5: float) -> float:
    v0 = ((b) - (d))
    if ((v0) > (180.0)):
        v0 = ((v0) - (360.0))
    else:
        if ((v0) < ((-(180.0)))):
            v0 = ((v0) + (360.0))
    v1 = ((((a) - (c))) / (a4))
    v2 = ((v0) / (a5))
    return math.exp((-(((((v1) * (v1))) + (((v2) * (v2)))))))
