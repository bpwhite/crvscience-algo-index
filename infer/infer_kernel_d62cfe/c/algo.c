// SPDX-License-Identifier: GPL-3.0-only
#include "algo.h"
#include <math.h>
#include <stdlib.h>

static inline int64_t algo_min_i64(int64_t a, int64_t b) { return a < b ? a : b; }
static inline int64_t algo_max_i64(int64_t a, int64_t b) { return a > b ? a : b; }

double infer_kernel(const double *xs, size_t xs_len, const double *ys, size_t ys_len) {
    (void)xs_len;
    (void)ys_len;
    double v0 = 0.0;
    for (int64_t i = (INT64_C(1)); i < (algo_min_i64(((int64_t)xs_len), ((int64_t)ys_len))); ++i) {
        double v1 = ((xs[(size_t)(i)]) - (xs[(size_t)(((i) - (INT64_C(1))))]));
        if (((v1) > (0.0))) {
            v0 = ((v0) + (((((0.5) * (((ys[(size_t)(((i) - (INT64_C(1))))]) + (ys[(size_t)(i)]))))) * (v1))));
        }
    }
    return v0;
}
