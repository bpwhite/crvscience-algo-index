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


def transform_kernel(xs: list[float], a: float) -> float:
    if ((len(xs)) == (0)):
        return 0.0
    v0 = ((min(max(a, 0.0), 1.0)) * (float(((len(xs)) - (1)))))
    v1 = int(float(math.floor(v0)))
    v2 = int(float(math.ceil(v0)))
    if ((v1) == (v2)):
        return xs[v1]
    else:
        v3 = ((v0) - (float(v1)))
        return ((((xs[v1]) * (((1.0) - (v3))))) + (((xs[v2]) * (v3))))
