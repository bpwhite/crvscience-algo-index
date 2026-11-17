// SPDX-License-Identifier: GPL-3.0-only
#ifndef ALGO_SIMILARITY_H
#define ALGO_SIMILARITY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

double similarity(const double *xs, size_t xs_len, const double *ys, size_t ys_len);

#endif
