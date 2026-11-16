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

double shannon_entropy(const int64_t *xs, size_t xs_len) {
    (void)xs_len;
    int64_t v0 = INT64_C(0);
    for (int64_t i = (INT64_C(0)); i < (((int64_t)xs_len)); ++i) {
        v0 = ((v0) + (xs[(size_t)(i)]));
    }
    if (((v0) == (INT64_C(0)))) {
        return 0.0;
    }
    double v1 = ((double)(v0));
    double v2 = 0.0;
    for (int64_t j = (INT64_C(0)); j < (((int64_t)xs_len)); ++j) {
        int64_t v3 = xs[(size_t)(j)];
        if (((v3) > (INT64_C(0)))) {
            double v4 = ((((double)(v3))) / (v1));
            v2 = ((v2) - (((v4) * (((log(v4)) / (0.69314718056))))));
        }
    }
    return v2;
}
