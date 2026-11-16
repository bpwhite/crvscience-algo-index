// SPDX-License-Identifier: GPL-3.0-only
export function transformKernel(a, b, c, d) {
  const v0 = Math.abs(b);
  if (((((v0) <= (0.000000000001))) || (((a) <= (0.0))))) {
    return 0.0;
  }
  const v1 = ((Math.pow(Math.max(c, 40.0), 1.852)) * (Math.pow(Math.max(d, 0.05), 4.8704)));
  return ((((((10.67) * (a))) * (Math.pow(v0, 1.852)))) / (Math.max(v1, 0.000000000001)));
}
