// SPDX-License-Identifier: GPL-3.0-only
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
    double v0 = fmin(fmax(a, 0.0), 40.0);
    return ((((((1800.6) - (((120.1) * (v0))))) + (((((3.7818) * (v0))) * (v0))))) - (((((((0.047608) * (v0))) * (v0))) * (v0))));
}
} // namespace algo
