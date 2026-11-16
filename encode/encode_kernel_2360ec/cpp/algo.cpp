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

#include "algo.hpp"
#include <cmath>
#include <cstdlib>

namespace {
inline int64_t algo_min_i64(int64_t a, int64_t b) { return a < b ? a : b; }
inline int64_t algo_max_i64(int64_t a, int64_t b) { return a > b ? a : b; }
} // namespace

namespace algo {
void encode_kernel(std::span<int64_t> buf, int64_t k) {
    (void)algo_min_i64;
    (void)algo_max_i64;
    buf[(size_t)(((int64_t)(((int32_t)(k)) >> (((uint32_t)(INT64_C(3))) & 31U))))] = ((int64_t)(((int32_t)(buf[(size_t)(((int64_t)(((int32_t)(k)) >> (((uint32_t)(INT64_C(3))) & 31U))))])) ^ ((int32_t)(((int64_t)((int32_t)(((uint32_t)((int32_t)(INT64_C(1)))) << (((uint32_t)(((int64_t)(((int32_t)(k)) & ((int32_t)(INT64_C(7))))))) & 31U))))))));
}
} // namespace algo
