// SPDX-License-Identifier: GPL-3.0-only
export function transformKernel(a) {
  let v0 = 1.0;
  let v1 = 1.0;
  const v2 = ((((0.25) * (a))) * (a));
  for (let i = (1); i < (28); ++i) {
    v1 = ((v1) * (((v2) / (Number(((i) * (i)))))));
    v0 = ((v0) + (v1));
    if (((v1) < (((0.0) * (v0))))) {
      break;
    }
  }
  return v0;
}
