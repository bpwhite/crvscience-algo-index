// SPDX-License-Identifier: GPL-3.0-or-later
// Copyright (C) 2026 CRV Science Network (https://crvscience.com)
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://gnu.org>.

#include "algo.h"
#include <math.h>
#include <stdlib.h>

static inline int64_t algo_min_i64(int64_t a, int64_t b) { return a < b ? a : b; }
static inline int64_t algo_max_i64(int64_t a, int64_t b) { return a > b ? a : b; }

double transform_kernel(double a, double b) {
    if (((a) <= (((1.0) / (3.0))))) {
        return 0.0;
    }
    double v0 = 0.0;
    if (((a) >= (0.999999))) {
        v0 = ((((b) + (0.5))) / (((b) + (1.5))));
    } else {
        v0 = a;
    }
    double v1 = ((1.5) * (((1.0) - (v0))));
    if (((v1) <= (0.000000001))) {
        return 6.0;
    } else {
        return fmax((-(log(v1))), 0.0);
    }
}
