// SPDX-License-Identifier: GPL-3.0-only
#include "algo.h"
#include <math.h>
#include <stdlib.h>

static inline int64_t algo_min_i64(int64_t a, int64_t b) { return a < b ? a : b; }
static inline int64_t algo_max_i64(int64_t a, int64_t b) { return a > b ? a : b; }

double transform_kernel(double a) {
    double v0 = ((fabs(a)) / (1.414213562373));
    double v1 = ((1.0) / (((1.0) + (((0.3275911) * (v0))))));
    double v2 = ((v1) * (((0.254829592) + (((v1) * ((((-(0.284496736))) + (((v1) * (((1.421413741) + (((v1) * ((((-(1.453152027))) + (((v1) * (1.061405429))))))))))))))))));
    double v3 = ((v2) * (exp((((-(v0))) * (v0)))));
    return fmin(fmax(v3, 0.0), 1.0);
}
