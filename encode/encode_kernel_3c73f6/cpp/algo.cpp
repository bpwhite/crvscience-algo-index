// SPDX-License-Identifier: GPL-3.0-only
#include "algo.hpp"
#include <cmath>
#include <cstdlib>

namespace {
inline int64_t algo_min_i64(int64_t a, int64_t b) { return a < b ? a : b; }
inline int64_t algo_max_i64(int64_t a, int64_t b) { return a > b ? a : b; }
} // namespace

namespace algo {
int64_t encode_kernel(int64_t k, int64_t m, int64_t q, int64_t p) {
    (void)algo_min_i64;
    (void)algo_max_i64;
    return ((int64_t)(((int32_t)(((int64_t)(((int32_t)(((int64_t)(((int32_t)(k)) | ((int32_t)(((int64_t)((int32_t)(((uint32_t)((int32_t)(m))) << (((uint32_t)(INT64_C(8))) & 31U)))))))))) | ((int32_t)(((int64_t)((int32_t)(((uint32_t)((int32_t)(q))) << (((uint32_t)(INT64_C(16))) & 31U)))))))))) | ((int32_t)(((int64_t)((int32_t)(((uint32_t)((int32_t)(p))) << (((uint32_t)(INT64_C(24))) & 31U))))))));
}
} // namespace algo
