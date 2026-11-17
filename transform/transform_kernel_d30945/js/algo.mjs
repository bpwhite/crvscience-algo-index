// SPDX-License-Identifier: GPL-3.0-only
export function transformKernel(a, b, c, d, a4, a5) {
  let v0 = ((b) - (d));
  if (((v0) > (180.0))) {
    v0 = ((v0) - (360.0));
  } else {
    if (((v0) < ((-(180.0))))) {
      v0 = ((v0) + (360.0));
    }
  }
  const v1 = ((((a) - (c))) / (a4));
  const v2 = ((v0) / (a5));
  return Math.exp((-(((((v1) * (v1))) + (((v2) * (v2)))))));
}
