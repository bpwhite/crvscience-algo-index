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
double transform_kernel(int64_t k, int64_t m, int64_t q, int64_t p) {
    (void)algo_min_i64;
    (void)algo_max_i64;
    int64_t v0 = algo_max_i64(k, q);
    int64_t v1 = algo_min_i64(m, p);
    if (((v1) < (v0))) {
        return 0.0;
    }
    double v2 = ((double)(((((v1) - (v0))) + (INT64_C(1)))));
    double v3 = ((((double)(((((((m) - (k))) + (INT64_C(1)))) + (((((p) - (q))) + (INT64_C(1)))))))) - (v2));
    if (((v3) <= (0.0))) {
        return 1.0;
    } else {
        return ((v2) / (v3));
    }
}
} // namespace algo
