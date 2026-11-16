// SPDX-License-Identifier: GPL-3.0-only
export function transformKernel(flag0, a, b, c) {
  if ((!(flag0))) {
    return 0.0;
  }
  const v0 = ((((((1.0) - (Math.min(Math.max(a, 0.0), 1.0)))) * (((1.0) - (Math.min(Math.max(b, 0.0), 1.0)))))) * (((1.0) - (Math.min(Math.max(c, 0.0), 1.0)))));
  return Math.min(Math.max(((1.0) - (v0)), 0.0), 1.0);
}
