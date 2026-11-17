// SPDX-License-Identifier: GPL-3.0-only
#include "algo.hpp"
#include <cmath>
#include <cstdlib>

namespace {
inline int64_t algo_min_i64(int64_t a, int64_t b) { return a < b ? a : b; }
inline int64_t algo_max_i64(int64_t a, int64_t b) { return a > b ? a : b; }
} // namespace

namespace algo {
double measure_kernel(std::span<const double> xs, std::span<const double> ys) {
    (void)algo_min_i64;
    (void)algo_max_i64;
    int64_t v0 = algo_min_i64(static_cast<int64_t>(xs.size()), static_cast<int64_t>(ys.size()));
    if (((v0) < (INT64_C(3)))) {
        return 0.0;
    }
    double __sum_acc_1 = 0.0;
    for (int64_t i = (INT64_C(0)); i < (v0); ++i) {
        __sum_acc_1 = ((__sum_acc_1) + (xs[(size_t)(i)]));
    }
    double v2 = ((__sum_acc_1) / (((double)(v0))));
    double __sum_acc_3 = 0.0;
    for (int64_t j = (INT64_C(0)); j < (v0); ++j) {
        __sum_acc_3 = ((__sum_acc_3) + (ys[(size_t)(j)]));
    }
    double v4 = ((__sum_acc_3) / (((double)(v0))));
    double v5 = 0.0;
    double v6 = 0.0;
    double v7 = 0.0;
    for (int64_t t = (INT64_C(0)); t < (v0); ++t) {
        double v8 = ((xs[(size_t)(t)]) - (v2));
        double v9 = ((ys[(size_t)(t)]) - (v4));
        v5 = ((v5) + (((v8) * (v9))));
        v6 = ((v6) + (((v8) * (v8))));
        v7 = ((v7) + (((v9) * (v9))));
    }
    double v10 = sqrt(((v6) * (v7)));
    if (((v10) > (0.000000001))) {
        return fmin(fmax(((v5) / (v10)), (-(1.0))), 1.0);
    } else {
        return 0.0;
    }
}
} // namespace algo
