// SPDX-License-Identifier: GPL-3.0-only
#include "algo.hpp"
#include <cmath>
#include <cstdlib>

namespace {
inline int64_t algo_min_i64(int64_t a, int64_t b) { return a < b ? a : b; }
inline int64_t algo_max_i64(int64_t a, int64_t b) { return a > b ? a : b; }
} // namespace

namespace algo {
double aicc(int64_t k, double a, int64_t m) {
    (void)algo_min_i64;
    (void)algo_max_i64;
    double v0 = ((double)(k));
    double v1 = ((double)(m));
    double v2 = fmax(((a) / (fmax(v0, 1.0))), 0.0);
    double v3 = ((((v0) * (log(v2)))) + (((2.0) * (v1))));
    if (((k) > (((m) + (INT64_C(1)))))) {
        return ((v3) + (((((((2.0) * (v1))) * (((v1) + (1.0))))) / (((double)(((((k) - (m))) - (INT64_C(1)))))))));
    } else {
        return ((v3) + (100.0));
    }
}
} // namespace algo
