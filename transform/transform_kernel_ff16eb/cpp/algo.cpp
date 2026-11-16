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
double transform_kernel(double a, double b, double c) {
    (void)algo_min_i64;
    (void)algo_max_i64;
    if (((((b) <= (0.0001))) || (((a) <= (0.1))))) {
        return 0.0;
    }
    double v0 = ((((((4.22) + (((0.39) * (sqrt(fmax(a, 0.0))))))) + (((0.36) * (log(fmax(b, 0.005))))))) + (((0.13) * (sqrt(fmax(c, 5.0))))));
    return exp(fmin(fmax(v0, (-(5.0))), 14.2));
}
} // namespace algo
