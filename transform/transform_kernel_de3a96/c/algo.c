// SPDX-License-Identifier: GPL-3.0-only
#include "algo.h"
#include <math.h>
#include <stdlib.h>

static inline int64_t algo_min_i64(int64_t a, int64_t b) { return a < b ? a : b; }
static inline int64_t algo_max_i64(int64_t a, int64_t b) { return a > b ? a : b; }

double transform_kernel(const double *xs, size_t xs_len, double a) {
    (void)xs_len;
    if (((((int64_t)xs_len)) == (INT64_C(0)))) {
        return 0.0;
    }
    double v0 = ((fmin(fmax(a, 0.0), 1.0)) * (((double)(((((int64_t)xs_len)) - (INT64_C(1)))))));
    int64_t v1 = ((int64_t)(floor(v0)));
    int64_t v2 = ((int64_t)(ceil(v0)));
    if (((v1) == (v2))) {
        return xs[(size_t)(v1)];
    } else {
        double v3 = ((v0) - (((double)(v1))));
        return ((((xs[(size_t)(v1)]) * (((1.0) - (v3))))) + (((xs[(size_t)(v2)]) * (v3))));
    }
}
