// SPDX-License-Identifier: GPL-3.0-only
export function encodeKernel(xs, k) {
  if ((((((xs[(((k) | 0) >> (((3) | 0) & 31))]) | 0) & (((((1) | 0) << ((((((k) | 0) & ((7) | 0))) | 0) & 31))) | 0))) !== (0))) {
    return 1;
  } else {
    return 0;
  }
}
