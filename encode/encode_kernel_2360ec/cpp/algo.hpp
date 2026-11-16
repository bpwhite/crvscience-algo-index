// SPDX-License-Identifier: GPL-3.0-only
#pragma once
#include <cstdint>
#include <span>

namespace algo {
void encode_kernel(std::span<int64_t> buf, int64_t k);
} // namespace algo
