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
double transform_kernel(double a, double b, double c, double d, double a4) {
    (void)algo_min_i64;
    (void)algo_max_i64;
    double v0 = ((a4) * (a4));
    double v1 = ((v0) * (a4));
    return ((0.5) * (((((((((2.0) * (b))) + ((((((-(a))) + (c))) * (a4))))) + (((((((((((2.0) * (a))) - (((5.0) * (b))))) + (((4.0) * (c))))) - (d))) * (v0))))) + ((((((((((-(a))) + (((3.0) * (b))))) - (((3.0) * (c))))) + (d))) * (v1))))));
}
} // namespace algo
