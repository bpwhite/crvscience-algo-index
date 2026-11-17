// SPDX-License-Identifier: GPL-3.0-only
#pragma once
#include <cstdint>
#include <span>

namespace algo {
double zwanzig_fep(std::span<const double> xs, double a);
} // namespace algo
