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
double transform_kernel(std::span<const double> xs, double a) {
    (void)algo_min_i64;
    (void)algo_max_i64;
    if (((static_cast<int64_t>(xs.size())) == (INT64_C(0)))) {
        return 0.0;
    }
    double v0 = ((fmin(fmax(a, 0.0), 1.0)) * (((double)(((static_cast<int64_t>(xs.size())) - (INT64_C(1)))))));
    int64_t v1 = ((int64_t)(floor(v0)));
    int64_t v2 = ((int64_t)(ceil(v0)));
    if (((v1) == (v2))) {
        return xs[(size_t)(v1)];
    } else {
        double v3 = ((v0) - (((double)(v1))));
        return ((((xs[(size_t)(v1)]) * (((1.0) - (v3))))) + (((xs[(size_t)(v2)]) * (v3))));
    }
}
} // namespace algo
