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

double transform_kernel(double a, double b, double c, double d) {
    double v0 = fmax(a, 0.0);
    double v1 = fmax(c, 0.000000001);
    double v2 = fmax(d, 0.000000001);
    double v3 = ((((v1) + (v0))) + (v2));
    double v4 = sqrt(fmax(((((v3) * (v3))) - (((((4.0) * (v1))) * (v0)))), 0.0));
    double v5 = fmin(fmax(((((v3) - (v4))) / (((2.0) * (v1)))), 0.0), 1.0);
    return ((b) * (((1.0) - (v5))));
}
