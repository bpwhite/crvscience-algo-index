// SPDX-License-Identifier: GPL-3.0-only
export function hasBit64(k, m, q) {
  if (((q) < (32))) {
    return (((((k) | 0) & (((((1) | 0) << (((q) | 0) & 31))) | 0))) !== (0));
  } else {
    return (((((m) | 0) & (((((1) | 0) << (((((q) - (32))) | 0) & 31))) | 0))) !== (0));
  }
}
