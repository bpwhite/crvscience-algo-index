// SPDX-License-Identifier: GPL-3.0-only
#pragma once
#include <cstdint>
#include <span>

namespace algo {
double catmull_rom_1d(double a, double b, double c, double d, double a4);
} // namespace algo
