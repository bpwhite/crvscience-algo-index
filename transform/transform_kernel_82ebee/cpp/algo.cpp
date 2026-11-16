// SPDX-License-Identifier: GPL-3.0-only
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
    double v0 = fmin(fmax(a, 0.0), 1.0);
    double v1 = ((fmin(fmax(b, 0.0), 1200.0)) / (1000.0));
    double v2 = fmin(fmax(c, 0.02), 0.85);
    double v3 = fmax(((((((0.41) * (v0))) + (((0.67) * (v1))))) + (((0.7) * (v2)))), 0.0001);
    double v4 = ((3.63) / (v3));
    return ((4.0) * (v4));
}
} // namespace algo
