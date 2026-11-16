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


def transform_kernel(a: float, b: float, c: float, d: float, a4: float, a5: float) -> float:
    v0 = ((a) * (math.cos(d)))
    v1 = ((a) * (math.sin(d)))
    v2 = ((b) - (((c) * (math.cos(a4)))))
    v3 = ((((c) * (math.sin(a4)))) * (math.cos(a5)))
    v4 = ((((c) * (math.sin(a4)))) * (math.sin(a5)))
    v5 = ((v0) - (v2))
    v6 = ((v1) - (v3))
    return math.sqrt(((((((v5) * (v5))) + (((v6) * (v6))))) + (((v4) * (v4)))))
