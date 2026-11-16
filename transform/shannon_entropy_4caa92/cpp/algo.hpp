// SPDX-License-Identifier: GPL-3.0-only
#pragma once
#include <cstdint>
#include <span>

namespace algo {
double shannon_entropy(std::span<const int64_t> xs);
} // namespace algo
