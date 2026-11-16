# SPDX-License-Identifier: GPL-3.0-only
from __future__ import annotations
import math


def transform_kernel(a: float, b: float) -> float:
    if ((a) <= (b)):
        return (-(745.0))
    v0 = ((b) - (a))
    if ((v0) < ((-(50.0)))):
        return a
    else:
        return ((a) + (math.log(max(((1.0) - (math.exp(v0))), 0.0))))
