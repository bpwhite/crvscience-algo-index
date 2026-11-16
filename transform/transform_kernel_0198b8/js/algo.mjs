// SPDX-License-Identifier: GPL-3.0-only
export function transformKernel(a, b, c, d, a4, a5, a6) {
  const v0 = Math.pow(Math.abs(((Math.cos(((((b) * (a))) * (0.25)))) / (c))), a5);
  const v1 = Math.pow(Math.abs(((Math.sin(((((b) * (a))) * (0.25)))) / (d))), a6);
  const v2 = Math.max(((v0) + (v1)), 0.000000001);
  return Math.pow(v2, (((-(1.0))) / (Math.max(a4, 0.1))));
}
