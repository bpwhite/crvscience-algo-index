# SPDX-License-Identifier: GPL-3.0-only
from __future__ import annotations
import math


def aicc(k: int, a: float, m: int) -> float:
    v0 = float(k)
    v1 = float(m)
    v2 = max(((a) / (max(v0, 1.0))), 0.0)
    v3 = ((((v0) * (math.log(v2)))) + (((2.0) * (v1))))
    if ((k) > (((m) + (1)))):
        return ((v3) + (((((((2.0) * (v1))) * (((v1) + (1.0))))) / (float(((((k) - (m))) - (1)))))))
    else:
        return ((v3) + (100.0))
