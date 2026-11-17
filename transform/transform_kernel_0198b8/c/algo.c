// SPDX-License-Identifier: GPL-3.0-only
#include "algo.h"
#include <math.h>
#include <stdlib.h>

static inline int64_t algo_min_i64(int64_t a, int64_t b) { return a < b ? a : b; }
static inline int64_t algo_max_i64(int64_t a, int64_t b) { return a > b ? a : b; }

double transform_kernel(double a, double b, double c, double d, double a4, double a5, double a6) {
    double v0 = pow(fabs(((cos(((((b) * (a))) * (0.25)))) / (c))), a5);
    double v1 = pow(fabs(((sin(((((b) * (a))) * (0.25)))) / (d))), a6);
    double v2 = fmax(((v0) + (v1)), 0.000000001);
    return pow(v2, (((-(1.0))) / (fmax(a4, 0.1))));
}
