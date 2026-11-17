// SPDX-License-Identifier: GPL-3.0-only
#include "algo.hpp"
#include <cmath>
#include <cstdlib>

namespace {
inline int64_t algo_min_i64(int64_t a, int64_t b) { return a < b ? a : b; }
inline int64_t algo_max_i64(int64_t a, int64_t b) { return a > b ? a : b; }
} // namespace

namespace algo {
double transform_kernel(double a, int64_t k, double b) {
    (void)algo_min_i64;
    (void)algo_max_i64;
    double v0 = ((double)(algo_max_i64(k, INT64_C(2))));
    double v1 = fmin(fmax(a, ((1.0) / (v0))), 0.999999);
    double v2 = ((1.0) - (v1));
    double v3 = 0.0;
    if (((v2) <= (0.000000001))) {
        v3 = 0.0;
    } else {
        v3 = (-(((((v1) * (((log(v1)) / (0.69314718056))))) + (((v2) * (((log(((v2) / (((v0) - (1.0)))))) / (0.69314718056))))))));
    }
    double v4 = fmin(fmax(((1.0) - (((v3) / (((log(v0)) / (0.69314718056)))))), 0.0), 1.0);
    return ((b) * (v4));
}
} // namespace algo
