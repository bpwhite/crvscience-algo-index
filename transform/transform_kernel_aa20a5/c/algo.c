// SPDX-License-Identifier: GPL-3.0-only
#include "algo.h"
#include <math.h>
#include <stdlib.h>

static inline int64_t algo_min_i64(int64_t a, int64_t b) { return a < b ? a : b; }
static inline int64_t algo_max_i64(int64_t a, int64_t b) { return a > b ? a : b; }

double transform_kernel(double a, double b, double c) {
    if (((((fabs(a)) <= (0.03))) && (((fabs(b)) <= (0.03))))) {
        return 0.0;
    } else {
        if (((b) < ((-(0.02))))) {
            return fmin(fmax(((0.42) + (((0.55) * ((-(b)))))), 0.35), 0.92);
        } else {
            double v0 = ((1.0) / (((1.0) + (((0.65) * (fmax(c, 0.0)))))));
            return fmin(fmax(((((0.042) / (((0.55) + (b))))) * (v0)), 0.008), 0.065);
        }
    }
}
