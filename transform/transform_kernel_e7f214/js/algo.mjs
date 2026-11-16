// SPDX-License-Identifier: GPL-3.0-only
export function transformKernel(k, a) {
  const v0 = Math.min(Math.max(a, 0.5), 3.0);
  const v1 = ((Math.log(Number(Math.max(k, 40)))) / (2.302585092994));
  const v2 = Math.max(((4.35) - (((0.28) * (((v0) - (1.0)))))), 3.4);
  const v3 = Math.max(((1.75) - (((0.15) * (((v0) - (1.0)))))), 1.3);
  const v4 = ((((v2) - (v1))) / (((v2) - (v3))));
  return Math.min(Math.max(v4, 0.03), 0.96);
}
