// SPDX-License-Identifier: GPL-3.0-only
#include "algo.hpp"
#include <cmath>
#include <cstdlib>

namespace {
inline int64_t algo_min_i64(int64_t a, int64_t b) { return a < b ? a : b; }
inline int64_t algo_max_i64(int64_t a, int64_t b) { return a > b ? a : b; }
} // namespace

namespace algo {
double similarity(std::span<const double> xs, std::span<const double> ys) {
    (void)algo_min_i64;
    (void)algo_max_i64;
    int64_t v0 = algo_min_i64(static_cast<int64_t>(xs.size()), static_cast<int64_t>(ys.size()));
    if (((v0) == (INT64_C(0)))) {
        return 0.0;
    }
    double v1 = 0.0;
    for (int64_t i = (INT64_C(0)); i < (v0); ++i) {
        v1 = ((v1) + (fabs(((xs[(size_t)(i)]) - (ys[(size_t)(i)])))));
    }
    return ((1.0) / (((1.0) + (((v1) / (((double)(v0))))))));
}
} // namespace algo
