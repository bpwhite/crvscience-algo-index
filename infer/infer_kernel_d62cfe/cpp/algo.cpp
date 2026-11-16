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
double infer_kernel(std::span<const double> xs, std::span<const double> ys) {
    (void)algo_min_i64;
    (void)algo_max_i64;
    double v0 = 0.0;
    for (int64_t i = (INT64_C(1)); i < (algo_min_i64(static_cast<int64_t>(xs.size()), static_cast<int64_t>(ys.size()))); ++i) {
        double v1 = ((xs[(size_t)(i)]) - (xs[(size_t)(((i) - (INT64_C(1))))]));
        if (((v1) > (0.0))) {
            v0 = ((v0) + (((((0.5) * (((ys[(size_t)(((i) - (INT64_C(1))))]) + (ys[(size_t)(i)]))))) * (v1))));
        }
    }
    return v0;
}
} // namespace algo
