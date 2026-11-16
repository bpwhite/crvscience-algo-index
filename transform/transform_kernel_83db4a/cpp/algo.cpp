// SPDX-License-Identifier: GPL-3.0-only
#include "algo.hpp"
#include <cmath>
#include <cstdlib>

namespace {
inline int64_t algo_min_i64(int64_t a, int64_t b) { return a < b ? a : b; }
inline int64_t algo_max_i64(int64_t a, int64_t b) { return a > b ? a : b; }
} // namespace

namespace algo {
double transform_kernel(double a, double b) {
    (void)algo_min_i64;
    (void)algo_max_i64;
    if (((a) <= (b))) {
        return (-(745.0));
    }
    double v0 = ((b) - (a));
    if (((v0) < ((-(50.0))))) {
        return a;
    } else {
        return ((a) + (log(fmax(((1.0) - (exp(v0))), 0.0))));
    }
}
} // namespace algo
