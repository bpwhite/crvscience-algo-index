// SPDX-License-Identifier: GPL-3.0-only
#include "algo.h"
#include <math.h>
#include <stdlib.h>

static inline int64_t algo_min_i64(int64_t a, int64_t b) { return a < b ? a : b; }
static inline int64_t algo_max_i64(int64_t a, int64_t b) { return a > b ? a : b; }

double transform_kernel(double a, double b) {
    if (((a) < (((40.0) * (b))))) {
        double v0 = exp(((a) / (b)));
        return ((100.0) * (((v0) / (((v0) + (1.0))))));
    } else {
        return 99.99;
    }
}
