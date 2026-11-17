// SPDX-License-Identifier: GPL-3.0-only
#include "algo.hpp"
#include <cmath>
#include <cstdlib>

namespace {
inline int64_t algo_min_i64(int64_t a, int64_t b) { return a < b ? a : b; }
inline int64_t algo_max_i64(int64_t a, int64_t b) { return a > b ? a : b; }
} // namespace

namespace algo {
int64_t lz76_complexity(std::span<const int64_t> xs) {
    (void)algo_min_i64;
    (void)algo_max_i64;
    int64_t v0 = static_cast<int64_t>(xs.size());
    if (((v0) == (INT64_C(0)))) {
        return INT64_C(0);
    }
    int64_t v1 = INT64_C(1);
    int64_t v2 = INT64_C(1);
    int64_t v3 = INT64_C(0);
    int64_t v4 = INT64_C(1);
    int64_t v5 = INT64_C(1);
    while (((((v2) + (v4))) <= (v0))) {
        if (((xs[(size_t)(((((v3) + (v4))) - (INT64_C(1))))]) == (xs[(size_t)(((((v2) + (v4))) - (INT64_C(1))))]))) {
            v4 = ((v4) + (INT64_C(1)));
            if (((((v2) + (v4))) > (v0))) {
                v1 = ((v1) + (INT64_C(1)));
                break;
            }
        } else {
            if (((v4) > (v5))) {
                v5 = v4;
            }
            v3 = ((v3) + (INT64_C(1)));
            if (((v3) == (v2))) {
                v1 = ((v1) + (INT64_C(1)));
                v2 = ((v2) + (v5));
                if (((v2) >= (v0))) {
                    break;
                }
                v3 = INT64_C(0);
                v4 = INT64_C(1);
                v5 = INT64_C(1);
            } else {
                v4 = INT64_C(1);
            }
        }
    }
    return v1;
}
} // namespace algo
