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
double transform_kernel(int64_t k, double a) {
    (void)algo_min_i64;
    (void)algo_max_i64;
    double v0 = fmin(fmax(a, 0.5), 3.0);
    double v1 = ((log(((double)(algo_max_i64(k, INT64_C(40)))))) / (2.302585092994));
    double v2 = fmax(((4.35) - (((0.28) * (((v0) - (1.0)))))), 3.4);
    double v3 = fmax(((1.75) - (((0.15) * (((v0) - (1.0)))))), 1.3);
    double v4 = ((((v2) - (v1))) / (((v2) - (v3))));
    return fmin(fmax(v4, 0.03), 0.96);
}
} // namespace algo
