// SPDX-License-Identifier: GPL-3.0-only
#include "algo.h"
#include <math.h>
#include <stdlib.h>

static inline int64_t algo_min_i64(int64_t a, int64_t b) { return a < b ? a : b; }
static inline int64_t algo_max_i64(int64_t a, int64_t b) { return a > b ? a : b; }

int64_t encode_kernel(const int64_t *xs, size_t xs_len, int64_t k) {
    (void)xs_len;
    if (((((int64_t)(((int32_t)(xs[(size_t)(((int64_t)(((int32_t)(k)) >> (((uint32_t)(INT64_C(3))) & 31U))))])) & ((int32_t)(((int64_t)((int32_t)(((uint32_t)((int32_t)(INT64_C(1)))) << (((uint32_t)(((int64_t)(((int32_t)(k)) & ((int32_t)(INT64_C(7))))))) & 31U))))))))) != (INT64_C(0)))) {
        return INT64_C(1);
    } else {
        return INT64_C(0);
    }
}
