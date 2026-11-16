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


def transform_kernel(a: float, b: float, c: float, d: float, a4: float, a5: float, a6: float) -> float:
    v0 = math.pow(float(abs(((math.cos(((((b) * (a))) * (0.25)))) / (c)))), a5)
    v1 = math.pow(float(abs(((math.sin(((((b) * (a))) * (0.25)))) / (d)))), a6)
    v2 = max(((v0) + (v1)), 0.000000001)
    return math.pow(v2, (((-(1.0))) / (max(a4, 0.1))))
