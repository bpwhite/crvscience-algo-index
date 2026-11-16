// SPDX-License-Identifier: GPL-3.0-only
export function shannonEntropy(xs) {
  let v0 = 0;
  for (let i = (0); i < (xs.length); ++i) {
    v0 = ((v0) + (xs[i]));
  }
  if (((v0) === (0))) {
    return 0.0;
  }
  const v1 = Number(v0);
  let v2 = 0.0;
  for (let j = (0); j < (xs.length); ++j) {
    const v3 = xs[j];
    if (((v3) > (0))) {
      const v4 = ((Number(v3)) / (v1));
      v2 = ((v2) - (((v4) * (((Math.log(v4)) / (0.69314718056))))));
    }
  }
  return v2;
}
