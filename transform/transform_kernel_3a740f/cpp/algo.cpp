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
    if (((a) >= (0.0))) {
        return ((1.0) / (((1.0) + (exp((-(a)))))));
    } else {
        double v0 = exp(a);
        return ((v0) / (((1.0) + (v0))));
    }
}
} // namespace algo
