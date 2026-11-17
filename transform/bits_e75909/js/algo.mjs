// SPDX-License-Identifier: GPL-3.0-only
export function bits(a, b, c, k) {
  const v0 = 2.0;
  let v1 = 0.0;
  if (((k) <= (1))) {
    v1 = 0.0;
  } else {
    v1 = ((Number(k)) / (((Number(k)) + (8.0))));
  }
  const v2 = Math.min(Math.max(((((((1.0) - (v1))) * (Math.min(Math.max(b, 0.05), 1.0)))) + (((v1) * (Math.min(Math.max(c, 0.08), 1.0))))), 0.06), 1.0);
  return ((v0) + (((Math.max(((a) - (v0)), 0.0)) * (v2))));
}
