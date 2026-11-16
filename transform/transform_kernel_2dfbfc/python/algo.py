# SPDX-License-Identifier: GPL-3.0-only
from __future__ import annotations
import math


def transform_kernel(a: float, b: float) -> float:
    if ((a) < (((40.0) * (b)))):
        v0 = math.exp(((a) / (b)))
        return ((100.0) * (((v0) / (((v0) + (1.0))))))
    else:
        return 99.99
