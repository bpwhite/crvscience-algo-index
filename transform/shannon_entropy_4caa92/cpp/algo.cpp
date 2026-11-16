// SPDX-License-Identifier: GPL-3.0-only
#include "algo.hpp"
#include <cmath>
#include <cstdlib>

namespace {
inline int64_t algo_min_i64(int64_t a, int64_t b) { return a < b ? a : b; }
inline int64_t algo_max_i64(int64_t a, int64_t b) { return a > b ? a : b; }
} // namespace

namespace algo {
double shannon_entropy(std::span<const int64_t> xs) {
    (void)algo_min_i64;
    (void)algo_max_i64;
    int64_t v0 = INT64_C(0);
    for (int64_t i = (INT64_C(0)); i < (static_cast<int64_t>(xs.size())); ++i) {
        v0 = ((v0) + (xs[(size_t)(i)]));
    }
    if (((v0) == (INT64_C(0)))) {
        return 0.0;
    }
    double v1 = ((double)(v0));
    double v2 = 0.0;
    for (int64_t j = (INT64_C(0)); j < (static_cast<int64_t>(xs.size())); ++j) {
        int64_t v3 = xs[(size_t)(j)];
        if (((v3) > (INT64_C(0)))) {
            double v4 = ((((double)(v3))) / (v1));
            v2 = ((v2) - (((v4) * (((log(v4)) / (0.69314718056))))));
        }
    }
    return v2;
}
} // namespace algo
