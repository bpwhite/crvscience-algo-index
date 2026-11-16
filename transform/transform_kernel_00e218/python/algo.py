# SPDX-License-Identifier: GPL-3.0-only
from __future__ import annotations
import math


def transform_kernel(xs: list[float], a: float) -> float:
    if ((len(xs)) == (0)):
        return 0.0
    v0 = ((min(max(a, 0.0), 1.0)) * (float(((len(xs)) - (1)))))
    v1 = int(float(math.floor(v0)))
    v2 = int(float(math.ceil(v0)))
    v3 = ((v0) - (float(v1)))
    return ((((xs[v1]) * (((1.0) - (v3))))) + (((xs[v2]) * (v3))))
