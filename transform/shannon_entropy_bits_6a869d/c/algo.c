// SPDX-License-Identifier: GPL-3.0-only
#include "algo.h"
#include <math.h>
#include <stdlib.h>

static inline int64_t algo_min_i64(int64_t a, int64_t b) { return a < b ? a : b; }
static inline int64_t algo_max_i64(int64_t a, int64_t b) { return a > b ? a : b; }

double shannon_entropy_bits(const int64_t *xs, size_t xs_len) {
    (void)xs_len;
    int64_t __sum_acc_0 = INT64_C(0);
    for (int64_t i = (INT64_C(0)); i < (((int64_t)xs_len)); ++i) {
        __sum_acc_0 = ((__sum_acc_0) + (xs[(size_t)(i)]));
    }
    int64_t v1 = __sum_acc_0;
    if (((v1) == (INT64_C(0)))) {
        return 0.0;
    }
    double v2 = ((double)(v1));
    double v3 = 0.0;
    for (int64_t j = (INT64_C(0)); j < (((int64_t)xs_len)); ++j) {
        int64_t v4 = xs[(size_t)(j)];
        if (((v4) > (INT64_C(0)))) {
            double v5 = ((((double)(v4))) / (v2));
            v3 = ((v3) - (((v5) * (((log(v5)) / (0.69314718056))))));
        }
    }
    return v3;
}
