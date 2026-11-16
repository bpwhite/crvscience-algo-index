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
double project_kernel(int64_t k, double a, int64_t m) {
    (void)algo_min_i64;
    (void)algo_max_i64;
    if (((((k) <= (INT64_C(1)))) || (((m) == (INT64_C(0)))))) {
        return 1.0;
    }
    double v0 = fmin(fmax(a, 0.005), 0.985);
    double v1 = ((double)(k));
    double v2 = ((v1) * (v0));
    double v3 = 1.0;
    double v4 = 1.0;
    for (int64_t i = (INT64_C(1)); i < (k); ++i) {
        v4 = ((v4) * (((v2) / (((double)(i))))));
        v3 = ((v3) + (v4));
    }
    double v5 = ((v4) * (((v2) / (v1))));
    double v6 = ((v5) / (fmax(((1.0) - (v0)), 0.000000001)));
    double v7 = ((1.0) / (((v3) + (v6))));
    double v8 = v7;
    double v9 = 0.0;
    for (int64_t j = (INT64_C(0)); j < (k); ++j) {
        if (((j) > (INT64_C(0)))) {
            v8 = ((v8) * (((v2) / (((double)(j))))));
        }
        if (((j) >= (m))) {
            double v10 = ((((double)(((k) - (j))))) / (v1));
            for (int64_t t = (INT64_C(0)); t < (m); ++t) {
                v10 = ((v10) * (((((double)(((j) - (t))))) / (((double)(algo_max_i64(((((k) - (INT64_C(1)))) - (t)), INT64_C(1))))))));
            }
            v9 = ((v9) + (((v8) * (v10))));
        }
    }
    double v11 = ((pow(v0, ((double)(m)))) * (((1.0) - (v0))));
    return fmin(fmax(((v9) / (fmax(v11, 0.000000000001))), 0.05), 8.0);
}
} // namespace algo
