// SPDX-License-Identifier: GPL-3.0-only
export function encodeKernel(k, m, q, p) {
  return (((((((((k) | 0) | (((((m) | 0) << (((8) | 0) & 31))) | 0))) | 0) | (((((q) | 0) << (((16) | 0) & 31))) | 0))) | 0) | (((((p) | 0) << (((24) | 0) & 31))) | 0));
}
