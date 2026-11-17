// SPDX-License-Identifier: GPL-3.0-only
#include "algo.h"
#include <math.h>
#include <stdlib.h>

static inline int64_t algo_min_i64(int64_t a, int64_t b) { return a < b ? a : b; }
static inline int64_t algo_max_i64(int64_t a, int64_t b) { return a > b ? a : b; }

double transform_kernel(double a, double b, double c, double d, double a4, double a5) {
    double v0 = ((b) - (d));
    if (((v0) > (180.0))) {
        v0 = ((v0) - (360.0));
    } else {
        if (((v0) < ((-(180.0))))) {
            v0 = ((v0) + (360.0));
        }
    }
    double v1 = ((((a) - (c))) / (a4));
    double v2 = ((v0) / (a5));
    return exp((-(((((v1) * (v1))) + (((v2) * (v2)))))));
}
