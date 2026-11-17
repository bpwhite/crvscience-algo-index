// SPDX-License-Identifier: GPL-3.0-only
#include "algo.h"
#include <math.h>
#include <stdlib.h>

static inline int64_t algo_min_i64(int64_t a, int64_t b) { return a < b ? a : b; }
static inline int64_t algo_max_i64(int64_t a, int64_t b) { return a > b ? a : b; }

bool encode_kernel(int64_t k, int64_t m, int64_t q) {
    if (((q) < (INT64_C(32)))) {
        return ((((int64_t)(((int32_t)(k)) & ((int32_t)(((int64_t)((int32_t)(((uint32_t)((int32_t)(INT64_C(1)))) << (((uint32_t)(q)) & 31U))))))))) != (INT64_C(0)));
    } else {
        return ((((int64_t)(((int32_t)(m)) & ((int32_t)(((int64_t)((int32_t)(((uint32_t)((int32_t)(INT64_C(1)))) << (((uint32_t)(((q) - (INT64_C(32))))) & 31U))))))))) != (INT64_C(0)));
    }
}
