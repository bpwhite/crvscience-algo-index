// SPDX-License-Identifier: GPL-3.0-only
export function transformKernel(a, b) {
  if (((a) <= (((1.0) / (3.0))))) {
    return 0.0;
  }
  let v0 = 0.0;
  if (((a) >= (0.999999))) {
    v0 = ((((b) + (0.5))) / (((b) + (1.5))));
  } else {
    v0 = a;
  }
  const v1 = ((1.5) * (((1.0) - (v0))));
  if (((v1) <= (0.000000001))) {
    return 6.0;
  } else {
    return Math.max((-(Math.log(v1))), 0.0);
  }
}
