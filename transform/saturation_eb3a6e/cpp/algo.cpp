// SPDX-License-Identifier: GPL-3.0-only
#include "algo.hpp"
#include <cmath>
#include <cstdlib>

namespace {
inline int64_t algo_min_i64(int64_t a, int64_t b) { return a < b ? a : b; }
inline int64_t algo_max_i64(int64_t a, int64_t b) { return a > b ? a : b; }
} // namespace

namespace algo {
double saturation(double a) {
    (void)algo_min_i64;
    (void)algo_max_i64;
    double v0 = ((fmin(fmax(a, 0.0), 40.0)) + (273.15));
    double v1 = (((((((((-(139.34411))) + (((157570.100000000006) / (v0))))) - (((66423080.0) / (((v0) * (v0))))))) + (((12438000000.0) / (((((v0) * (v0))) * (v0))))))) - (((862194900000.0) / (((((((v0) * (v0))) * (v0))) * (v0))))));
    return exp(v1);
}
} // namespace algo
