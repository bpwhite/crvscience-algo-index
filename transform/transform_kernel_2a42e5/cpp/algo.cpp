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
    if (((a) <= (((1.0) / (3.0))))) {
        return 0.0;
    }
    double v0 = 0.0;
    if (((a) >= (0.999999))) {
        v0 = ((((b) + (0.5))) / (((b) + (1.5))));
    } else {
        v0 = a;
    }
    double v1 = ((1.5) * (((1.0) - (v0))));
    if (((v1) <= (0.000000001))) {
        return 6.0;
    } else {
        return fmax((-(log(v1))), 0.0);
    }
}
} // namespace algo
