// SPDX-License-Identifier: GPL-3.0-only
#ifndef ALGO_SORTED_QUANTILE_H
#define ALGO_SORTED_QUANTILE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

double sorted_quantile(const double *xs, size_t xs_len, double a);

#endif
