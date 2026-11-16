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


def transform_kernel(a: float) -> float:
    v0 = 0.0
    if ((a) < (0.0)):
        v0 = (-(1.0))
    else:
        v0 = 1.0
    v1 = float(abs(a))
    v2 = ((1.0) / (((1.0) + (((0.3275911) * (v1))))))
    v3 = ((1.0) - (((((((((((((((((((((1.061405429) * (v2))) - (1.453152027))) * (v2))) + (1.421413741))) * (v2))) - (0.284496736))) * (v2))) + (0.254829592))) * (v2))) * (math.exp((((-(v1))) * (v1)))))))
    return ((v0) * (v3))
