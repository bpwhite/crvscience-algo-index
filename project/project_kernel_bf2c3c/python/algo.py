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


def project_kernel(k: int, a: float, m: int) -> float:
    if ((((k) <= (1))) or (((m) == (0)))):
        return 1.0
    v0 = min(max(a, 0.005), 0.985)
    v1 = float(k)
    v2 = ((v1) * (v0))
    v3 = 1.0
    v4 = 1.0
    for i in range(1, k):
        v4 = ((v4) * (((v2) / (float(i)))))
        v3 = ((v3) + (v4))
    v5 = ((v4) * (((v2) / (v1))))
    v6 = ((v5) / (max(((1.0) - (v0)), 0.000000001)))
    v7 = ((1.0) / (((v3) + (v6))))
    v8 = v7
    v9 = 0.0
    for j in range(0, k):
        if ((j) > (0)):
            v8 = ((v8) * (((v2) / (float(j)))))
        if ((j) >= (m)):
            v10 = ((float(((k) - (j)))) / (v1))
            for t in range(0, m):
                v10 = ((v10) * (((float(((j) - (t)))) / (float(max(((((k) - (1))) - (t)), 1))))))
            v9 = ((v9) + (((v8) * (v10))))
    v11 = ((math.pow(v0, float(m))) * (((1.0) - (v0))))
    return min(max(((v9) / (max(v11, 0.000000000001))), 0.05), 8.0)
