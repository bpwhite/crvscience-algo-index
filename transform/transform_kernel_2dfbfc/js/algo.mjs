// SPDX-License-Identifier: GPL-3.0-only
export function transformKernel(a, b) {
  if (((a) < (((40.0) * (b))))) {
    const v0 = Math.exp(((a) / (b)));
    return ((100.0) * (((v0) / (((v0) + (1.0))))));
  } else {
    return 99.99;
  }
}
