// SPDX-License-Identifier: GPL-3.0-only
#include "algo.h"
#include <math.h>
#include <stdlib.h>

static inline int64_t algo_min_i64(int64_t a, int64_t b) { return a < b ? a : b; }
static inline int64_t algo_max_i64(int64_t a, int64_t b) { return a > b ? a : b; }

double bits(double a, double b, double c, int64_t k) {
    double v0 = 2.0;
    double v1 = 0.0;
    if (((k) <= (INT64_C(1)))) {
        v1 = 0.0;
    } else {
        v1 = ((((double)(k))) / (((((double)(k))) + (8.0))));
    }
    double v2 = fmin(fmax(((((((1.0) - (v1))) * (fmin(fmax(b, 0.05), 1.0)))) + (((v1) * (fmin(fmax(c, 0.08), 1.0))))), 0.06), 1.0);
    return ((v0) + (((fmax(((a) - (v0)), 0.0)) * (v2))));
}
