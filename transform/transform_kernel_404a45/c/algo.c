// SPDX-License-Identifier: GPL-3.0-only
#include "algo.h"
#include <math.h>
#include <stdlib.h>

static inline int64_t algo_min_i64(int64_t a, int64_t b) { return a < b ? a : b; }
static inline int64_t algo_max_i64(int64_t a, int64_t b) { return a > b ? a : b; }

double transform_kernel(double a, double b, double c, double d) {
    double v0 = fmax(a, 0.0);
    double v1 = fmin(fmax(b, 0.0), 1.0);
    double v2 = ((fmin(fmax(c, 0.0), 1200.0)) / (1000.0));
    double v3 = fmin(fmax(d, 0.02), 0.85);
    double v4 = (((-(3.63))) + (((v0) * (((((((0.41) * (v1))) + (((0.67) * (v2))))) + (((0.7) * (v3))))))));
    if (((v4) >= (35.0))) {
        return 1.0;
    } else {
        if (((v4) <= ((-(35.0))))) {
            return 0.0;
        } else {
            double v5 = exp(v4);
            return ((v5) / (((1.0) + (v5))));
        }
    }
}
