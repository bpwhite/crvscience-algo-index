// SPDX-License-Identifier: GPL-3.0-only
#ifndef ALGO_CATMULL_ROM_1D_H
#define ALGO_CATMULL_ROM_1D_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

double catmull_rom_1d(double a, double b, double c, double d, double a4);

#endif
