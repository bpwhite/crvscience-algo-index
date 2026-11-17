// SPDX-License-Identifier: GPL-3.0-only
#include "algo.hpp"
#include <cmath>
#include <cstdlib>

namespace {
inline int64_t algo_min_i64(int64_t a, int64_t b) { return a < b ? a : b; }
inline int64_t algo_max_i64(int64_t a, int64_t b) { return a > b ? a : b; }
} // namespace

namespace algo {
double infer_kernel(std::span<const double> xs) {
    (void)algo_min_i64;
    (void)algo_max_i64;
    double v0 = 0.0;
    double v1 = 0.0;
    for (int64_t i = (INT64_C(0)); i < (static_cast<int64_t>(xs.size())); ++i) {
        double v2 = xs[(size_t)(i)];
        double v3 = ((v2) - (v0));
        v1 = ((v1) + (((v3) * (v3))));
        v0 = v2;
    }
    return ((v1) + (((v0) * (v0))));
}
} // namespace algo
