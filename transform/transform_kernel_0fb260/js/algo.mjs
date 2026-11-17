// SPDX-License-Identifier: GPL-3.0-only
export function transformKernel(k, a, m) {
  const v0 = Number(k);
  const v1 = Number(m);
  const v2 = Math.max(((a) / (Math.max(v0, 1.0))), 0.0);
  const v3 = ((((v0) * (Math.log(v2)))) + (((2.0) * (v1))));
  if (((k) > (((m) + (1))))) {
    return ((v3) + (((((((2.0) * (v1))) * (((v1) + (1.0))))) / (Number(((((k) - (m))) - (1)))))));
  } else {
    return ((v3) + (100.0));
  }
}
