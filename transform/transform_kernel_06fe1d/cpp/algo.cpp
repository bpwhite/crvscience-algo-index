// SPDX-License-Identifier: GPL-3.0-only
#include "algo.hpp"
#include <cmath>
#include <cstdlib>

namespace {
inline int64_t algo_min_i64(int64_t a, int64_t b) { return a < b ? a : b; }
inline int64_t algo_max_i64(int64_t a, int64_t b) { return a > b ? a : b; }
} // namespace

namespace algo {
double transform_kernel(double a, double b, double c, double d, double a4) {
    (void)algo_min_i64;
    (void)algo_max_i64;
    double v0 = ((a4) * (a4));
    double v1 = ((v0) * (a4));
    return ((0.5) * (((((((((2.0) * (b))) + ((((((-(a))) + (c))) * (a4))))) + (((((((((((2.0) * (a))) - (((5.0) * (b))))) + (((4.0) * (c))))) - (d))) * (v0))))) + ((((((((((-(a))) + (((3.0) * (b))))) - (((3.0) * (c))))) + (d))) * (v1))))));
}
} // namespace algo
