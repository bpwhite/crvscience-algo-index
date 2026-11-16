// SPDX-License-Identifier: GPL-3.0-only
#ifndef ALGO_ENCODE_KERNEL_H
#define ALGO_ENCODE_KERNEL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

int64_t encode_kernel(const int64_t *xs, size_t xs_len, int64_t k);

#endif
