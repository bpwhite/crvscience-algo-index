// SPDX-License-Identifier: GPL-3.0-only
export function shannonEntropy(xs) {
  let __sum_acc_0 = 0;
  for (let i = (0); i < (xs.length); ++i) {
    __sum_acc_0 = ((__sum_acc_0) + (xs[i]));
  }
  const v1 = __sum_acc_0;
  if (((v1) === (0))) {
    return 0.0;
  }
  const v2 = Number(v1);
  let v3 = 0.0;
  for (let j = (0); j < (xs.length); ++j) {
    const v4 = xs[j];
    if (((v4) > (0))) {
      const v5 = ((Number(v4)) / (v2));
      v3 = ((v3) - (((v5) * (((Math.log(v5)) / (0.69314718056))))));
    }
  }
  return v3;
}
