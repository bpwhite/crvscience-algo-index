// SPDX-License-Identifier: GPL-3.0-only
#include "algo.h"
#include <math.h>
#include <stdlib.h>

static inline int64_t algo_min_i64(int64_t a, int64_t b) { return a < b ? a : b; }
static inline int64_t algo_max_i64(int64_t a, int64_t b) { return a > b ? a : b; }

double transform_kernel(double a, double b, double c, double d, double a4, double a5) {
    double v0 = ((a) * (cos(d)));
    double v1 = ((a) * (sin(d)));
    double v2 = ((b) - (((c) * (cos(a4)))));
    double v3 = ((((c) * (sin(a4)))) * (cos(a5)));
    double v4 = ((((c) * (sin(a4)))) * (sin(a5)));
    double v5 = ((v0) - (v2));
    double v6 = ((v1) - (v3));
    return sqrt(((((((v5) * (v5))) + (((v6) * (v6))))) + (((v4) * (v4)))));
}
