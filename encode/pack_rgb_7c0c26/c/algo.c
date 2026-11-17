// SPDX-License-Identifier: GPL-3.0-only
#include "algo.h"
#include <math.h>
#include <stdlib.h>

static inline int64_t algo_min_i64(int64_t a, int64_t b) { return a < b ? a : b; }
static inline int64_t algo_max_i64(int64_t a, int64_t b) { return a > b ? a : b; }

int64_t pack_rgb(int64_t k, int64_t m, int64_t q) {
    return ((int64_t)(((int32_t)(((int64_t)(((int32_t)(((int64_t)((int32_t)(((uint32_t)((int32_t)(k))) << (((uint32_t)(INT64_C(16))) & 31U)))))) | ((int32_t)(((int64_t)((int32_t)(((uint32_t)((int32_t)(m))) << (((uint32_t)(INT64_C(8))) & 31U)))))))))) | ((int32_t)(q))));
}
