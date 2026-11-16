// SPDX-License-Identifier: GPL-3.0-only
export function kl(xs, ys) {
  let v0 = 0.0;
  for (let i = (0); i < (4); ++i) {
    if (((((xs[i]) > (0.0))) && (((ys[i]) > (0.0))))) {
      v0 = ((v0) + (((xs[i]) * (((Math.log(((xs[i]) / (ys[i])))) / (0.69314718056))))));
    }
  }
  return v0;
}
