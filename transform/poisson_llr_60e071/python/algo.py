# SPDX-License-Identifier: GPL-3.0-only
from __future__ import annotations
import math


def poisson_llr(a: float, b: float, c: float) -> float:
    if ((((((a) <= (b))) or (((b) <= (0.0))))) or (((((c) - (b))) <= (0.0)))):
        return 0.0
    v0 = max(((c) - (a)), 0.0)
    v1 = ((c) - (b))
    v2 = ((a) * (math.log(((a) / (b)))))
    v3 = 0.0
    if ((v0) > (0.0)):
        v3 = ((v0) * (math.log(((v0) / (v1)))))
    else:
        v3 = 0.0
    return max(((v2) + (v3)), 0.0)
