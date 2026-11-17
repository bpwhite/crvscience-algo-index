// SPDX-License-Identifier: GPL-3.0-only
#include "algo.hpp"
#include <cmath>
#include <cstdlib>

namespace {
inline int64_t algo_min_i64(int64_t a, int64_t b) { return a < b ? a : b; }
inline int64_t algo_max_i64(int64_t a, int64_t b) { return a > b ? a : b; }
} // namespace

namespace algo {
double infer_kernel(std::span<const double> xs, std::span<const double> ys) {
    (void)algo_min_i64;
    (void)algo_max_i64;
    double v0 = 0.0;
    for (int64_t i = (INT64_C(1)); i < (algo_min_i64(static_cast<int64_t>(xs.size()), static_cast<int64_t>(ys.size()))); ++i) {
        double v1 = ((xs[(size_t)(i)]) - (xs[(size_t)(((i) - (INT64_C(1))))]));
        if (((v1) > (0.0))) {
            v0 = ((v0) + (((((0.5) * (((ys[(size_t)(((i) - (INT64_C(1))))]) + (ys[(size_t)(i)]))))) * (v1))));
        }
    }
    return v0;
}
} // namespace algo
