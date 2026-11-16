// SPDX-License-Identifier: GPL-3.0-only
#pragma once
#include <cstdint>
#include <span>

namespace algo {
int64_t encode_kernel(std::span<const int64_t> xs, int64_t k);
} // namespace algo
