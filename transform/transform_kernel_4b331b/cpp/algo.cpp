// SPDX-License-Identifier: GPL-3.0-only
#include "algo.hpp"
#include <cmath>
#include <cstdlib>

namespace {
inline int64_t algo_min_i64(int64_t a, int64_t b) { return a < b ? a : b; }
inline int64_t algo_max_i64(int64_t a, int64_t b) { return a > b ? a : b; }
} // namespace

namespace algo {
double transform_kernel(double a, double b, double c) {
    (void)algo_min_i64;
    (void)algo_max_i64;
    double v0 = fmax(((a) + (273.15)), 180.0);
    double v1 = fmin(fmax(((b) / (fmax(((1.0) - (b)), 0.9))), 0.000001), 0.05);
    double v2 = fmax(((((c) * (v1))) / (((0.622) + (v1)))), 0.0001);
    double v3 = ((((2840.0) / (((((((3.5) * (log(v0)))) - (log(v2)))) - (4.805))))) + (55.0));
    double v4 = ((((v0) * (pow(((1000.0) / (fmax(((c) - (v2)), 10.0))), 0.2854)))) * (pow(((v0) / (v3)), ((0.28) * (v1)))));
    return ((v4) * (exp(((((((((3036.0) / (v3))) - (1.78))) * (v1))) * (((1.0) + (((0.448) * (v1)))))))));
}
} // namespace algo
