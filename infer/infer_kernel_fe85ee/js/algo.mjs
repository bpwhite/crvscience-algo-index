// SPDX-License-Identifier: GPL-3.0-only
export function inferKernel(xs) {
  let v0 = 0.0;
  let v1 = 0.0;
  for (let i = (0); i < (xs.length); ++i) {
    const v2 = xs[i];
    const v3 = ((v2) - (v0));
    v1 = ((v1) + (((v3) * (v3))));
    v0 = v2;
  }
  return ((v1) + (((v0) * (v0))));
}
