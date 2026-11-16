// SPDX-License-Identifier: GPL-3.0-only
#include "algo.hpp"
#include <cmath>
#include <cstdlib>

namespace {
inline int64_t algo_min_i64(int64_t a, int64_t b) { return a < b ? a : b; }
inline int64_t algo_max_i64(int64_t a, int64_t b) { return a > b ? a : b; }
} // namespace

namespace algo {
double transform_kernel(bool flag0, double a, double b, double c) {
    (void)algo_min_i64;
    (void)algo_max_i64;
    if ((!(flag0))) {
        return 0.0;
    }
    double v0 = ((((((1.0) - (fmin(fmax(a, 0.0), 1.0)))) * (((1.0) - (fmin(fmax(b, 0.0), 1.0)))))) * (((1.0) - (fmin(fmax(c, 0.0), 1.0)))));
    return fmin(fmax(((1.0) - (v0)), 0.0), 1.0);
}
} // namespace algo
