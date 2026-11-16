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


def transform_kernel(a: float, b: float, c: float) -> float:
    v0 = max(((a) + (273.15)), 180.0)
    v1 = min(max(((b) / (max(((1.0) - (b)), 0.9))), 0.000001), 0.05)
    v2 = max(((((c) * (v1))) / (((0.622) + (v1)))), 0.0001)
    v3 = ((((2840.0) / (((((((3.5) * (math.log(v0)))) - (math.log(v2)))) - (4.805))))) + (55.0))
    v4 = ((((v0) * (math.pow(((1000.0) / (max(((c) - (v2)), 10.0))), 0.2854)))) * (math.pow(((v0) / (v3)), ((0.28) * (v1)))))
    return ((v4) * (math.exp(((((((((3036.0) / (v3))) - (1.78))) * (v1))) * (((1.0) + (((0.448) * (v1)))))))))
