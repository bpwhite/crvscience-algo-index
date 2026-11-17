// SPDX-License-Identifier: GPL-3.0-only
#include "algo.h"
#include <math.h>
#include <stdlib.h>

static inline int64_t algo_min_i64(int64_t a, int64_t b) { return a < b ? a : b; }
static inline int64_t algo_max_i64(int64_t a, int64_t b) { return a > b ? a : b; }

double ramp_maximize(double a, double b, double c) {
    if (((a) <= (b))) {
        return 0.05;
    } else {
        if (((a) >= (c))) {
            return 1.0;
        } else {
            return ((0.05) + (((0.95) * (((((a) - (b))) / (fmax(((c) - (b)), 0.000000001)))))));
        }
    }
}
