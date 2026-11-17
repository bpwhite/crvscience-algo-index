// SPDX-License-Identifier: GPL-3.0-only
#include "algo.h"
#include <math.h>
#include <stdlib.h>

static inline int64_t algo_min_i64(int64_t a, int64_t b) { return a < b ? a : b; }
static inline int64_t algo_max_i64(int64_t a, int64_t b) { return a > b ? a : b; }

double transform_kernel(double a, double b, double c) {
    if (((((((a) <= (b))) || (((b) <= (0.0))))) || (((((c) - (b))) <= (0.0))))) {
        return 0.0;
    }
    double v0 = fmax(((c) - (a)), 0.0);
    double v1 = ((c) - (b));
    double v2 = ((a) * (log(((a) / (b)))));
    double v3 = 0.0;
    if (((v0) > (0.0))) {
        v3 = ((v0) * (log(((v0) / (v1)))));
    } else {
        v3 = 0.0;
    }
    return fmax(((v2) + (v3)), 0.0);
}
