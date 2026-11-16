// SPDX-License-Identifier: GPL-3.0-or-later
// Copyright (C) 2026 CRV Science Network (https://crvscience.com)
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://gnu.org>.

#include "algo.h"
#include <math.h>
#include <stdlib.h>

static inline int64_t algo_min_i64(int64_t a, int64_t b) { return a < b ? a : b; }
static inline int64_t algo_max_i64(int64_t a, int64_t b) { return a > b ? a : b; }

int64_t encode_kernel(int64_t k, int64_t m, int64_t q) {
    return ((int64_t)(((int32_t)(((int64_t)(((int32_t)(((int64_t)((int32_t)(((uint32_t)((int32_t)(k))) << (((uint32_t)(INT64_C(16))) & 31U)))))) | ((int32_t)(((int64_t)((int32_t)(((uint32_t)((int32_t)(m))) << (((uint32_t)(INT64_C(8))) & 31U)))))))))) | ((int32_t)(q))));
}
