# SPDX-License-Identifier: GPL-3.0-only
from __future__ import annotations
import math


def migration_fraction(k: int, a: float) -> float:
    v0 = min(max(a, 0.5), 3.0)
    v1 = ((math.log(float(max(k, 40)))) / (2.302585092994))
    v2 = max(((4.35) - (((0.28) * (((v0) - (1.0)))))), 3.4)
    v3 = max(((1.75) - (((0.15) * (((v0) - (1.0)))))), 1.3)
    v4 = ((((v2) - (v1))) / (((v2) - (v3))))
    return min(max(v4, 0.03), 0.96)
