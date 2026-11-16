// SPDX-License-Identifier: GPL-3.0-only
export function inferKernel(xs, ys) {
  let v0 = 0.0;
  for (let i = (1); i < (Math.min(xs.length, ys.length)); ++i) {
    const v1 = ((xs[i]) - (xs[((i) - (1))]));
    if (((v1) > (0.0))) {
      v0 = ((v0) + (((((0.5) * (((ys[((i) - (1))]) + (ys[i]))))) * (v1))));
    }
  }
  return v0;
}
