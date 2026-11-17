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
    double v0 = ((((((999.842594) + (((0.06793952) * (a))))) - (((0.00909529) * (pow(a, ((double)(INT64_C(2))))))))) + (((0.0001001685) * (pow(a, ((double)(INT64_C(3))))))));
    double v1 = ((((0.824493) - (((0.0040899) * (a))))) * (b));
    double v2 = ((0.0045) * (c));
    return ((((v0) + (v1))) + (v2));
}
} // namespace algo
