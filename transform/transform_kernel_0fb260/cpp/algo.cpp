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
double transform_kernel(int64_t k, double a, int64_t m) {
    (void)algo_min_i64;
    (void)algo_max_i64;
    double v0 = ((double)(k));
    double v1 = ((double)(m));
    double v2 = fmax(((a) / (fmax(v0, 1.0))), 0.0);
    double v3 = ((((v0) * (log(v2)))) + (((2.0) * (v1))));
    if (((k) > (((m) + (INT64_C(1)))))) {
        return ((v3) + (((((((2.0) * (v1))) * (((v1) + (1.0))))) / (((double)(((((k) - (m))) - (INT64_C(1)))))))));
    } else {
        return ((v3) + (100.0));
    }
}
} // namespace algo
