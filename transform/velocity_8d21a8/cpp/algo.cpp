// SPDX-License-Identifier: GPL-3.0-only
#include "algo.hpp"
#include <cmath>
#include <cstdlib>

namespace {
inline int64_t algo_min_i64(int64_t a, int64_t b) { return a < b ? a : b; }
inline int64_t algo_max_i64(int64_t a, int64_t b) { return a > b ? a : b; }
} // namespace

namespace algo {
double velocity(double a, double b, double c, double d) {
    (void)algo_min_i64;
    (void)algo_max_i64;
    double v0 = fmax(a, 0.0);
    double v1 = fmax(c, 0.000000001);
    double v2 = fmax(d, 0.000000001);
    double v3 = ((((v1) + (v0))) + (v2));
    double v4 = sqrt(fmax(((((v3) * (v3))) - (((((4.0) * (v1))) * (v0)))), 0.0));
    double v5 = fmin(fmax(((((v3) - (v4))) / (((2.0) * (v1)))), 0.0), 1.0);
    return ((b) * (((1.0) - (v5))));
}
} // namespace algo
