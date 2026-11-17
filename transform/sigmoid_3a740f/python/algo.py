# SPDX-License-Identifier: GPL-3.0-only
from __future__ import annotations
import math


def sigmoid(a: float) -> float:
    if ((a) >= (0.0)):
        return ((1.0) / (((1.0) + (math.exp((-(a)))))))
    else:
        v0 = math.exp(a)
        return ((v0) / (((1.0) + (v0))))
