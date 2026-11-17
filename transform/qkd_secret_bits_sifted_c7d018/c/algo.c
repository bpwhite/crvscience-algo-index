// SPDX-License-Identifier: GPL-3.0-only
#include "algo.h"
#include <math.h>
#include <stdlib.h>

static inline int64_t algo_min_i64(int64_t a, int64_t b) { return a < b ? a : b; }
static inline int64_t algo_max_i64(int64_t a, int64_t b) { return a > b ? a : b; }

double qkd_secret_bits_sifted(int64_t k, double a) {
    double v0 = ((double)(algo_max_i64(k, INT64_C(2))));
    double v1 = ((((v0) - (1.0))) / (v0));
    double v2 = fmin(fmax(a, 0.0), v1);
    if (((v2) <= (0.0))) {
        return ((log(v0)) / (0.69314718056));
    }
    if (((v2) >= (((v1) - (0.000000000001))))) {
        return 0.0;
    }
    double v3 = (((((-(v2))) * (((log(((v2) / (((v0) - (1.0)))))) / (0.69314718056))))) - (((((1.0) - (v2))) * (((log(((1.0) - (v2)))) / (0.69314718056))))));
    return fmax(((((log(v0)) / (0.69314718056))) - (((2.0) * (v3)))), 0.0);
}
