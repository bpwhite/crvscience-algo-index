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


def shannon_entropy(xs: list[int]) -> float:
    v0 = 0
    for i in range(0, len(xs)):
        v0 = ((v0) + (xs[i]))
    if ((v0) == (0)):
        return 0.0
    v1 = float(v0)
    v2 = 0.0
    for j in range(0, len(xs)):
        v3 = xs[j]
        if ((v3) > (0)):
            v4 = ((float(v3)) / (v1))
            v2 = ((v2) - (((v4) * (((math.log(v4)) / (0.69314718056))))))
    return v2
