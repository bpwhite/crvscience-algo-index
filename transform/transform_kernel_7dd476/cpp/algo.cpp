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
double transform_kernel(double a) {
    (void)algo_min_i64;
    (void)algo_max_i64;
    double v0 = fabs(a);
    double v1 = ((1.0) / (((1.0) + (((0.5) * (v0))))));
    double v2 = ((v1) * (exp((((((((-(v0))) * (v0))) - (1.26551223))) + (((v1) * (((1.00002368) + (((v1) * (((0.37409196) + (((v1) * (((0.09678418) + (((v1) * ((((-(0.18628806))) + (((v1) * (((0.27886807) + (((v1) * ((((-(1.13520398))) + (((v1) * (((1.48851587) + (((v1) * ((((-(0.82215223))) + (((v1) * (0.17087277)))))))))))))))))))))))))))))))))))))));
    if (((a) >= (0.0))) {
        return ((1.0) - (v2));
    } else {
        return ((v2) - (1.0));
    }
}
} // namespace algo
