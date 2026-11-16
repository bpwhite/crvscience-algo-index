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

#include "algo.hpp"
#include <cmath>
#include <cstdlib>

namespace {
inline int64_t algo_min_i64(int64_t a, int64_t b) { return a < b ? a : b; }
inline int64_t algo_max_i64(int64_t a, int64_t b) { return a > b ? a : b; }
} // namespace

namespace algo {
int64_t transform_kernel(int64_t k) {
    (void)algo_min_i64;
    (void)algo_max_i64;
    if (((k) < (INT64_C(15)))) {
        return INT64_C(3);
    }
    double v0 = ((double)(k));
    double v1 = 1.0;
    int64_t v2 = INT64_C(1);
    for (int64_t i = (INT64_C(1)); i <= (INT64_C(35)); ++i) {
        double v3 = ((double)(i));
        double v4 = ((1.0) - (((((v3) * (((v3) + (1.0))))) / (fmax(((2.5) * (v0)), 20.0)))));
        if (((v4) <= (0.0))) {
            break;
        }
        v1 = ((v1) * (v4));
        if (((v1) >= (0.95))) {
            v2 = i;
        } else {
            break;
        }
    }
    return algo_max_i64(v2, INT64_C(2));
}
} // namespace algo
