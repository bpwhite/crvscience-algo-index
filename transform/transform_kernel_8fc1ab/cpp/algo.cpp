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
    if (((a) <= (b))) {
        return 1.0;
    } else {
        if (((a) >= (c))) {
            return 0.05;
        } else {
            return ((1.0) - (((0.95) * (((((a) - (b))) / (fmax(((c) - (b)), 0.000000001)))))));
        }
    }
}
} // namespace algo
