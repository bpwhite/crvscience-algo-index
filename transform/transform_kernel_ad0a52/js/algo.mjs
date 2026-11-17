// SPDX-License-Identifier: GPL-3.0-only
export function transformKernel(k, m, q) {
  if (((k) < (20))) {
    return 0.5;
  }
  const v0 = ((Number(m)) / (Number(k)));
  const v1 = ((Number(q)) / (Number(k)));
  const v2 = Math.max(((((1.0) - (((2.0) * (v0))))) - (v1)), 0.01);
  const v3 = Math.max(((1.0) - (((2.0) * (v1)))), 0.01);
  return Math.min(Math.max((((((-(0.5))) * (Math.log(v2)))) - (((0.25) * (Math.log(v3))))), 0.0), 1.5);
}
