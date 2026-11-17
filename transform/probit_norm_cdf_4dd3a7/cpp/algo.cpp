// SPDX-License-Identifier: GPL-3.0-only
#include "algo.hpp"
#include <cmath>
#include <cstdlib>

namespace {
inline int64_t algo_min_i64(int64_t a, int64_t b) { return a < b ? a : b; }
inline int64_t algo_max_i64(int64_t a, int64_t b) { return a > b ? a : b; }
} // namespace

namespace algo {
double probit_norm_cdf(double a) {
    (void)algo_min_i64;
    (void)algo_max_i64;
    double v0 = ((a) / (1.414213562373));
    double v1 = 0.0;
    if (((v0) < (0.0))) {
        v1 = (-(1.0));
    } else {
        v1 = 1.0;
    }
    double v2 = fabs(v0);
    double v3 = ((1.0) / (((1.0) + (((0.3275911) * (v2))))));
    double v4 = ((1.0) - (((((((((((((((((((((1.061405429) * (v3))) - (1.453152027))) * (v3))) + (1.421413741))) * (v3))) - (0.284496736))) * (v3))) + (0.254829592))) * (v3))) * (exp((((-(v2))) * (v2)))))));
    return ((0.5) * (((1.0) + (((v1) * (v4))))));
}
} // namespace algo
