// SPDX-License-Identifier: GPL-3.0-only
#pragma once
#include <cstdint>
#include <span>

namespace algo {
double measure_kernel(std::span<const double> xs, std::span<const double> ys);
} // namespace algo
