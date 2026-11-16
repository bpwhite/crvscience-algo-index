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
    double v0 = fmax(((a) + (273.15)), 180.0);
    double v1 = fmin(fmax(((b) / (fmax(((1.0) - (b)), 0.9))), 0.000001), 0.05);
    double v2 = fmax(((((c) * (v1))) / (((0.622) + (v1)))), 0.0001);
    double v3 = ((((2840.0) / (((((((3.5) * (log(v0)))) - (log(v2)))) - (4.805))))) + (55.0));
    double v4 = ((((v0) * (pow(((1000.0) / (fmax(((c) - (v2)), 10.0))), 0.2854)))) * (pow(((v0) / (v3)), ((0.28) * (v1)))));
    return ((v4) * (exp(((((((((3036.0) / (v3))) - (1.78))) * (v1))) * (((1.0) + (((0.448) * (v1)))))))));
}
} // namespace algo
