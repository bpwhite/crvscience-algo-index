// SPDX-License-Identifier: GPL-3.0-only
#include "algo.h"
#include <math.h>
#include <stdlib.h>

static inline int64_t algo_min_i64(int64_t a, int64_t b) { return a < b ? a : b; }
static inline int64_t algo_max_i64(int64_t a, int64_t b) { return a > b ? a : b; }

double similarity(const double *xs, size_t xs_len, const double *ys, size_t ys_len) {
    (void)xs_len;
    (void)ys_len;
    int64_t v0 = algo_min_i64(((int64_t)xs_len), ((int64_t)ys_len));
    if (((v0) == (INT64_C(0)))) {
        return 0.0;
    }
    double v1 = 0.0;
    for (int64_t i = (INT64_C(0)); i < (v0); ++i) {
        v1 = ((v1) + (fabs(((xs[(size_t)(i)]) - (ys[(size_t)(i)])))));
    }
    return ((1.0) / (((1.0) + (((v1) / (((double)(v0))))))));
}
