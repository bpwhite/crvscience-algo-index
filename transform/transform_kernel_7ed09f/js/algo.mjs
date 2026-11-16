// SPDX-License-Identifier: GPL-3.0-only
export function transformKernel(a, b, c) {
  if (((a) <= (b))) {
    return 0.05;
  } else {
    if (((a) >= (c))) {
      return 1.0;
    } else {
      return ((0.05) + (((0.95) * (((((a) - (b))) / (Math.max(((c) - (b)), 0.000000001)))))));
    }
  }
}
