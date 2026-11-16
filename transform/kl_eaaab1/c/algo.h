// SPDX-License-Identifier: GPL-3.0-only
#ifndef ALGO_KL_H
#define ALGO_KL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

double kl(const double *xs, size_t xs_len, const double *ys, size_t ys_len);

#endif
