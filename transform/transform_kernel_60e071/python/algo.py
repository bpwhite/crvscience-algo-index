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
    if ((((((a) <= (b))) or (((b) <= (0.0))))) or (((((c) - (b))) <= (0.0)))):
        return 0.0
    v0 = max(((c) - (a)), 0.0)
    v1 = ((c) - (b))
    v2 = ((a) * (math.log(((a) / (b)))))
    v3 = 0.0
    if ((v0) > (0.0)):
        v3 = ((v0) * (math.log(((v0) / (v1)))))
    else:
        v3 = 0.0
    return max(((v2) + (v3)), 0.0)
