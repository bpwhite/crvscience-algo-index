// SPDX-License-Identifier: GPL-3.0-only
#include "algo.h"
#include <math.h>
#include <stdlib.h>

static inline int64_t algo_min_i64(int64_t a, int64_t b) { return a < b ? a : b; }
static inline int64_t algo_max_i64(int64_t a, int64_t b) { return a > b ? a : b; }

double transform_kernel(double a) {
    double v0 = a;
    while (((v0) > (180.0))) {
        v0 = ((v0) - (360.0));
    }
    while (((v0) < ((-(180.0))))) {
        v0 = ((v0) + (360.0));
    }
    return v0;
}
