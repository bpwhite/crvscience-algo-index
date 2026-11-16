// SPDX-License-Identifier: GPL-3.0-only
#include "algo.h"
#include <math.h>
#include <stdlib.h>

static inline int64_t algo_min_i64(int64_t a, int64_t b) { return a < b ? a : b; }
static inline int64_t algo_max_i64(int64_t a, int64_t b) { return a > b ? a : b; }

double kl(const double *xs, size_t xs_len, const double *ys, size_t ys_len) {
    (void)xs_len;
    (void)ys_len;
    double v0 = 0.0;
    for (int64_t i = (INT64_C(0)); i < (INT64_C(4)); ++i) {
        if (((((xs[(size_t)(i)]) > (0.0))) && (((ys[(size_t)(i)]) > (0.0))))) {
            v0 = ((v0) + (((xs[(size_t)(i)]) * (((log(((xs[(size_t)(i)]) / (ys[(size_t)(i)])))) / (0.69314718056))))));
        }
    }
    return v0;
}
