// SPDX-License-Identifier: GPL-3.0-only
#include "algo.h"
#include <math.h>
#include <stdlib.h>

static inline int64_t algo_min_i64(int64_t a, int64_t b) { return a < b ? a : b; }
static inline int64_t algo_max_i64(int64_t a, int64_t b) { return a > b ? a : b; }

double transform_kernel(double a, double b, double c) {
    if (((((b) <= (0.0001))) || (((a) <= (0.1))))) {
        return 0.0;
    }
    double v0 = ((((((4.22) + (((0.39) * (sqrt(fmax(a, 0.0))))))) + (((0.36) * (log(fmax(b, 0.005))))))) + (((0.13) * (sqrt(fmax(c, 5.0))))));
    return exp(fmin(fmax(v0, (-(5.0))), 14.2));
}
