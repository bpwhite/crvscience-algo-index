// SPDX-License-Identifier: GPL-3.0-only
export function transformKernel(a, k, b) {
  const v0 = Number(Math.max(k, 2));
  const v1 = Math.min(Math.max(a, ((1.0) / (v0))), 0.999999);
  const v2 = ((1.0) - (v1));
  let v3 = 0.0;
  if (((v2) <= (0.000000001))) {
    v3 = 0.0;
  } else {
    v3 = (-(((((v1) * (((Math.log(v1)) / (0.69314718056))))) + (((v2) * (((Math.log(((v2) / (((v0) - (1.0)))))) / (0.69314718056))))))));
  }
  const v4 = Math.min(Math.max(((1.0) - (((v3) / (((Math.log(v0)) / (0.69314718056)))))), 0.0), 1.0);
  return ((b) * (v4));
}
