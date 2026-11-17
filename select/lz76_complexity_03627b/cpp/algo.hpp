// SPDX-License-Identifier: GPL-3.0-only
#pragma once
#include <cstdint>
#include <span>

namespace algo {
int64_t lz76_complexity(std::span<const int64_t> xs);
} // namespace algo
