// SPDX-License-Identifier: GPL-3.0-only
#ifndef ALGO_INFER_KERNEL_H
#define ALGO_INFER_KERNEL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

double infer_kernel(const double *xs, size_t xs_len);

#endif
