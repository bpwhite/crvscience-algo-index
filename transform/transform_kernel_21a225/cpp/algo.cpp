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
    double v0 = 1.0;
    double v1 = 1.0;
    double v2 = ((((0.25) * (a))) * (a));
    for (int64_t i = (INT64_C(1)); i < (INT64_C(28)); ++i) {
        v1 = ((v1) * (((v2) / (((double)(((i) * (i))))))));
        v0 = ((v0) + (v1));
        if (((v1) < (((0.0) * (v0))))) {
            break;
        }
    }
    return v0;
}
} // namespace algo
