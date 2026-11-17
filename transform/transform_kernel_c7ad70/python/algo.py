# SPDX-License-Identifier: GPL-3.0-only
from __future__ import annotations


def transform_kernel(a: float) -> float:
    v0 = min(max(a, 0.0), 40.0)
    return ((((((1800.6) - (((120.1) * (v0))))) + (((((3.7818) * (v0))) * (v0))))) - (((((((0.047608) * (v0))) * (v0))) * (v0))))
