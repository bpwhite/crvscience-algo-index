// SPDX-License-Identifier: GPL-3.0-only
export function transformKernel(k, m, q, p) {
  const v0 = Math.max(k, q);
  const v1 = Math.min(m, p);
  if (((v1) < (v0))) {
    return 0.0;
  }
  const v2 = Number(((((v1) - (v0))) + (1)));
  const v3 = ((Number(((((((m) - (k))) + (1))) + (((((p) - (q))) + (1)))))) - (v2));
  if (((v3) <= (0.0))) {
    return 1.0;
  } else {
    return ((v2) / (v3));
  }
}
