// SPDX-License-Identifier: GPL-3.0-only
#include "algo.hpp"
#include <cmath>
#include <cstdlib>

namespace {
inline int64_t algo_min_i64(int64_t a, int64_t b) { return a < b ? a : b; }
inline int64_t algo_max_i64(int64_t a, int64_t b) { return a > b ? a : b; }
} // namespace

namespace algo {
double binary_entropy(double a) {
    (void)algo_min_i64;
    (void)algo_max_i64;
    double v0 = fmin(fmax(a, 0.0), 1.0);
    if (((((v0) <= (0.0))) || (((v0) >= (((1.0) - (0.0))))))) {
        return 0.0;
    }
    return (((((-(v0))) * (((log(v0)) / (0.69314718056))))) - (((((1.0) - (v0))) * (((log(((1.0) - (v0)))) / (0.69314718056))))));
}
} // namespace algo
