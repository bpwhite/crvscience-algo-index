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
    v0 = ((((((999.842594) + (((0.06793952) * (a))))) - (((0.00909529) * (math.pow(a, float(2))))))) + (((0.0001001685) * (math.pow(a, float(3))))))
    v1 = ((((0.824493) - (((0.0040899) * (a))))) * (b))
    v2 = ((0.0045) * (c))
    return ((((v0) + (v1))) + (v2))
