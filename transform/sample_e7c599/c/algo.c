// SPDX-License-Identifier: GPL-3.0-only
#include "algo.h"
#include <math.h>
#include <stdlib.h>

static inline int64_t algo_min_i64(int64_t a, int64_t b) { return a < b ? a : b; }
static inline int64_t algo_max_i64(int64_t a, int64_t b) { return a > b ? a : b; }

int64_t sample(double a, double b) {
    if (((a) <= (0.000000000001))) {
        return INT64_C(0);
    }
    double v0 = fmin(a, 45.0);
    double v1 = exp((-(v0)));
    double v2 = v1;
    if (((b) <= (v2))) {
        return INT64_C(0);
    }
    for (int64_t i = (INT64_C(1)); i <= (INT64_C(96)); ++i) {
        v1 = ((v1) * (((v0) / (((double)(i))))));
        v2 = ((v2) + (v1));
        if (((b) <= (v2))) {
            return i;
        }
    }
    return INT64_C(96);
}
