// SPDX-License-Identifier: GPL-3.0-only
#include "algo.h"
#include <math.h>
#include <stdlib.h>

static inline int64_t algo_min_i64(int64_t a, int64_t b) { return a < b ? a : b; }
static inline int64_t algo_max_i64(int64_t a, int64_t b) { return a > b ? a : b; }

double transform_kernel(int64_t k, int64_t m, int64_t q, int64_t p) {
    int64_t v0 = algo_max_i64(k, q);
    int64_t v1 = algo_min_i64(m, p);
    if (((v1) < (v0))) {
        return 0.0;
    }
    double v2 = ((double)(((((v1) - (v0))) + (INT64_C(1)))));
    double v3 = ((((double)(((((((m) - (k))) + (INT64_C(1)))) + (((((p) - (q))) + (INT64_C(1)))))))) - (v2));
    if (((v3) <= (0.0))) {
        return 1.0;
    } else {
        return ((v2) / (v3));
    }
}
