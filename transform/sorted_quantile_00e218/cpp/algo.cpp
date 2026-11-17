// SPDX-License-Identifier: GPL-3.0-only
#include "algo.hpp"
#include <cmath>
#include <cstdlib>

namespace {
inline int64_t algo_min_i64(int64_t a, int64_t b) { return a < b ? a : b; }
inline int64_t algo_max_i64(int64_t a, int64_t b) { return a > b ? a : b; }
} // namespace

namespace algo {
double sorted_quantile(std::span<const double> xs, double a) {
    (void)algo_min_i64;
    (void)algo_max_i64;
    if (((static_cast<int64_t>(xs.size())) == (INT64_C(0)))) {
        return 0.0;
    }
    double v0 = ((fmin(fmax(a, 0.0), 1.0)) * (((double)(((static_cast<int64_t>(xs.size())) - (INT64_C(1)))))));
    int64_t v1 = ((int64_t)(floor(v0)));
    int64_t v2 = ((int64_t)(ceil(v0)));
    double v3 = ((v0) - (((double)(v1))));
    return ((((xs[(size_t)(v1)]) * (((1.0) - (v3))))) + (((xs[(size_t)(v2)]) * (v3))));
}
} // namespace algo
