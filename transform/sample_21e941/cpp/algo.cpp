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
int64_t sample(double a, double b) {
    (void)algo_min_i64;
    (void)algo_max_i64;
    if (((a) <= (0.000000000001))) {
        return INT64_C(0);
    }
    double v0 = fmin(a, 25.0);
    double v1 = exp((-(v0)));
    double v2 = v1;
    if (((b) <= (v2))) {
        return INT64_C(0);
    }
    for (int64_t i = (INT64_C(1)); i <= (INT64_C(48)); ++i) {
        v1 = ((v1) * (((v0) / (((double)(i))))));
        v2 = ((v2) + (v1));
        if (((b) <= (v2))) {
            return i;
        }
    }
    return INT64_C(48);
}
} // namespace algo
