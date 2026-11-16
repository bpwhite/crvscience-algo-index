// SPDX-License-Identifier: GPL-3.0-only
#ifndef ALGO_ENCODE_KERNEL_H
#define ALGO_ENCODE_KERNEL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

void encode_kernel(int64_t *buf, size_t buf_len, int64_t k);

#endif
