// SPDX-License-Identifier: GPL-3.0-only
export function similarity(xs, ys) {
  const v0 = Math.min(xs.length, ys.length);
  if (((v0) === (0))) {
    return 0.0;
  }
  let v1 = 0.0;
  for (let i = (0); i < (v0); ++i) {
    v1 = ((v1) + (Math.abs(((xs[i]) - (ys[i])))));
  }
  return ((1.0) / (((1.0) + (((v1) / (Number(v0)))))));
}
