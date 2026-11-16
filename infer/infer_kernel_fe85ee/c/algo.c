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

double infer_kernel(const double *xs, size_t xs_len) {
    (void)xs_len;
    double v0 = 0.0;
    double v1 = 0.0;
    for (int64_t i = (INT64_C(0)); i < (((int64_t)xs_len)); ++i) {
        double v2 = xs[(size_t)(i)];
        double v3 = ((v2) - (v0));
        v1 = ((v1) + (((v3) * (v3))));
        v0 = v2;
    }
    return ((v1) + (((v0) * (v0))));
}
