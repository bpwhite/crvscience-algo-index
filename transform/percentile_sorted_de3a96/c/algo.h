// SPDX-License-Identifier: GPL-3.0-only
#ifndef ALGO_PERCENTILE_SORTED_H
#define ALGO_PERCENTILE_SORTED_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

double percentile_sorted(const double *xs, size_t xs_len, double a);

#endif
