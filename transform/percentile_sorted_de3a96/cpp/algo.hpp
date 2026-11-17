// SPDX-License-Identifier: GPL-3.0-only
#pragma once
#include <cstdint>
#include <span>

namespace algo {
double percentile_sorted(std::span<const double> xs, double a);
} // namespace algo
