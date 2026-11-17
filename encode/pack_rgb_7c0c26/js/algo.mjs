// SPDX-License-Identifier: GPL-3.0-only
export function packRgb(k, m, q) {
  return (((((((((k) | 0) << (((16) | 0) & 31))) | 0) | (((((m) | 0) << (((8) | 0) & 31))) | 0))) | 0) | ((q) | 0));
}
