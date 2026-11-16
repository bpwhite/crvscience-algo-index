# SPDX-License-Identifier: GPL-3.0-or-later
# Copyright (C) 2026 CRV Science Network (https://crvscience.com)
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <https://gnu.org>.

from __future__ import annotations
import math


def transform_kernel(k: int, a: float) -> float:
    v0 = min(max(a, 0.5), 3.0)
    v1 = ((math.log(float(max(k, 40)))) / (2.302585092994))
    v2 = max(((4.35) - (((0.28) * (((v0) - (1.0)))))), 3.4)
    v3 = max(((1.75) - (((0.15) * (((v0) - (1.0)))))), 1.3)
    v4 = ((((v2) - (v1))) / (((v2) - (v3))))
    return min(max(v4, 0.03), 0.96)
