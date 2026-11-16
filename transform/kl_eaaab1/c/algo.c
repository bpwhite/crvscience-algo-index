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

double kl(const double *xs, size_t xs_len, const double *ys, size_t ys_len) {
    (void)xs_len;
    (void)ys_len;
    double v0 = 0.0;
    for (int64_t i = (INT64_C(0)); i < (INT64_C(4)); ++i) {
        if (((((xs[(size_t)(i)]) > (0.0))) && (((ys[(size_t)(i)]) > (0.0))))) {
            v0 = ((v0) + (((xs[(size_t)(i)]) * (((log(((xs[(size_t)(i)]) / (ys[(size_t)(i)])))) / (0.69314718056))))));
        }
    }
    return v0;
}
