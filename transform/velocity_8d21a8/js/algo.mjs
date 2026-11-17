// SPDX-License-Identifier: GPL-3.0-only
export function velocity(a, b, c, d) {
  const v0 = Math.max(a, 0.0);
  const v1 = Math.max(c, 0.000000001);
  const v2 = Math.max(d, 0.000000001);
  const v3 = ((((v1) + (v0))) + (v2));
  const v4 = Math.sqrt(Math.max(((((v3) * (v3))) - (((((4.0) * (v1))) * (v0)))), 0.0));
  const v5 = Math.min(Math.max(((((v3) - (v4))) / (((2.0) * (v1)))), 0.0), 1.0);
  return ((b) * (((1.0) - (v5))));
}
