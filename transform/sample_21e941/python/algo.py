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


def sample(a: float, b: float) -> int:
    if ((a) <= (0.000000000001)):
        return 0
    v0 = min(a, 25.0)
    v1 = math.exp((-(v0)))
    v2 = v1
    if ((b) <= (v2)):
        return 0
    for i in range(1, (48) + 1):
        v1 = ((v1) * (((v0) / (float(i)))))
        v2 = ((v2) + (v1))
        if ((b) <= (v2)):
            return i
    return 48
