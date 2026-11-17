// SPDX-License-Identifier: GPL-3.0-only
#pragma once
#include <cstdint>
#include <span>

namespace algo {
int64_t transform_kernel(std::span<const double> xs, double a);
} // namespace algo
