// SPDX-License-Identifier: GPL-3.0-only
#include "algo.h"
#include <math.h>
#include <stdlib.h>

static inline int64_t algo_min_i64(int64_t a, int64_t b) { return a < b ? a : b; }
static inline int64_t algo_max_i64(int64_t a, int64_t b) { return a > b ? a : b; }

double transform_kernel(double a, double b, double c, double d) {
    double v0 = fabs(b);
    if (((((v0) <= (0.000000000001))) || (((a) <= (0.0))))) {
        return 0.0;
    }
    double v1 = ((pow(fmax(c, 40.0), 1.852)) * (pow(fmax(d, 0.05), 4.8704)));
    return ((((((10.67) * (a))) * (pow(v0, 1.852)))) / (fmax(v1, 0.000000000001)));
}
