// SPDX-License-Identifier: GPL-3.0-only
#ifndef ALGO_LZ76_COMPLEXITY_H
#define ALGO_LZ76_COMPLEXITY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

int64_t lz76_complexity(const int64_t *xs, size_t xs_len);

#endif
