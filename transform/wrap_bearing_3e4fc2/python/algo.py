# SPDX-License-Identifier: GPL-3.0-only
from __future__ import annotations


def wrap_bearing(a: float) -> float:
    v0 = a
    while ((v0) > (180.0)):
        v0 = ((v0) - (360.0))
    while ((v0) < ((-(180.0)))):
        v0 = ((v0) + (360.0))
    return v0
