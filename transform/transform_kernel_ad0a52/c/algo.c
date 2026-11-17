// SPDX-License-Identifier: GPL-3.0-only
#include "algo.h"
#include <math.h>
#include <stdlib.h>

static inline int64_t algo_min_i64(int64_t a, int64_t b) { return a < b ? a : b; }
static inline int64_t algo_max_i64(int64_t a, int64_t b) { return a > b ? a : b; }

double transform_kernel(int64_t k, int64_t m, int64_t q) {
    if (((k) < (INT64_C(20)))) {
        return 0.5;
    }
    double v0 = ((((double)(m))) / (((double)(k))));
    double v1 = ((((double)(q))) / (((double)(k))));
    double v2 = fmax(((((1.0) - (((2.0) * (v0))))) - (v1)), 0.01);
    double v3 = fmax(((1.0) - (((2.0) * (v1)))), 0.01);
    return fmin(fmax((((((-(0.5))) * (log(v2)))) - (((0.25) * (log(v3))))), 0.0), 1.5);
}
