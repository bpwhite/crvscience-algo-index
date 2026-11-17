// SPDX-License-Identifier: GPL-3.0-only
#ifndef ALGO_SHANNON_ENTROPY_BITS_H
#define ALGO_SHANNON_ENTROPY_BITS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

double shannon_entropy_bits(const int64_t *xs, size_t xs_len);

#endif
