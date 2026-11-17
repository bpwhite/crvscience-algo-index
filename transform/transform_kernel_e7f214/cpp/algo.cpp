// SPDX-License-Identifier: GPL-3.0-only
#include "algo.hpp"
#include <cmath>
#include <cstdlib>

namespace {
inline int64_t algo_min_i64(int64_t a, int64_t b) { return a < b ? a : b; }
inline int64_t algo_max_i64(int64_t a, int64_t b) { return a > b ? a : b; }
} // namespace

namespace algo {
double transform_kernel(int64_t k, double a) {
    (void)algo_min_i64;
    (void)algo_max_i64;
    double v0 = fmin(fmax(a, 0.5), 3.0);
    double v1 = ((log(((double)(algo_max_i64(k, INT64_C(40)))))) / (2.302585092994));
    double v2 = fmax(((4.35) - (((0.28) * (((v0) - (1.0)))))), 3.4);
    double v3 = fmax(((1.75) - (((0.15) * (((v0) - (1.0)))))), 1.3);
    double v4 = ((((v2) - (v1))) / (((v2) - (v3))));
    return fmin(fmax(v4, 0.03), 0.96);
}
} // namespace algo
