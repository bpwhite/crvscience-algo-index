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
double transform_kernel(double a, double b, double c, double d) {
    (void)algo_min_i64;
    (void)algo_max_i64;
    double v0 = fmax(a, 0.0);
    double v1 = fmin(fmax(b, 0.0), 1.0);
    double v2 = ((fmin(fmax(c, 0.0), 1200.0)) / (1000.0));
    double v3 = fmin(fmax(d, 0.02), 0.85);
    double v4 = (((-(3.63))) + (((v0) * (((((((0.41) * (v1))) + (((0.67) * (v2))))) + (((0.7) * (v3))))))));
    if (((v4) >= (35.0))) {
        return 1.0;
    } else {
        if (((v4) <= ((-(35.0))))) {
            return 0.0;
        } else {
            double v5 = exp(v4);
            return ((v5) / (((1.0) + (v5))));
        }
    }
}
} // namespace algo
