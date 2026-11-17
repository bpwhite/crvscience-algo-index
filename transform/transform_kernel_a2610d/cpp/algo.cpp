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
    double v0 = 0.0;
    if (((a) < (0.0))) {
        v0 = (-(1.0));
    } else {
        v0 = 1.0;
    }
    double v1 = ((fabs(a)) / (1.414213562373));
    double v2 = ((1.0) / (((1.0) + (((0.3275911) * (v1))))));
    double v3 = ((1.0) - (((((((((((((((((((((1.061405429) * (v2))) - (1.453152027))) * (v2))) + (1.421413741))) * (v2))) - (0.284496736))) * (v2))) + (0.254829592))) * (v2))) * (exp((((-(v1))) * (v1)))))));
    return ((0.5) * (((1.0) + (((v0) * (v3))))));
}
} // namespace algo
