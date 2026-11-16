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
    if (((a) <= (0.0))) {
        return 1.0;
    }
    double v0 = sqrt(((0.5) * (a)));
    double v1 = ((1.0) / (((1.0) + (((0.3275911) * (v0))))));
    double v2 = ((v1) * (((0.254829592) + (((v1) * ((((-(0.284496736))) + (((v1) * (((1.421413741) + (((v1) * ((((-(1.453152027))) + (((v1) * (1.061405429))))))))))))))))));
    return fmin(fmax(((v2) * (exp((((-(v0))) * (v0))))), 0.0), 1.0);
}
} // namespace algo
