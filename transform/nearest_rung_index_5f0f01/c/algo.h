// SPDX-License-Identifier: GPL-3.0-only
#ifndef ALGO_NEAREST_RUNG_INDEX_H
#define ALGO_NEAREST_RUNG_INDEX_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

int64_t nearest_rung_index(const double *xs, size_t xs_len, double a);

#endif
