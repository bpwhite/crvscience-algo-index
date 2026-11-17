// SPDX-License-Identifier: GPL-3.0-only
export function measureKernel(xs, ys) {
  const v0 = Math.min(xs.length, ys.length);
  if (((v0) < (2))) {
    return 1.0;
  }
  let __sum_acc_1 = 0.0;
  for (let i = (0); i < (v0); ++i) {
    __sum_acc_1 = ((__sum_acc_1) + (xs[i]));
  }
  const v2 = ((__sum_acc_1) / (Number(v0)));
  let __sum_acc_3 = 0.0;
  for (let j = (0); j < (v0); ++j) {
    __sum_acc_3 = ((__sum_acc_3) + (ys[j]));
  }
  const v4 = ((__sum_acc_3) / (Number(v0)));
  let v5 = 0.0;
  let v6 = 0.0;
  let v7 = 0.0;
  for (let t = (0); t < (v0); ++t) {
    const v8 = ((xs[t]) - (v2));
    const v9 = ((ys[t]) - (v4));
    v5 = ((v5) + (((v8) * (v9))));
    v6 = ((v6) + (((v8) * (v8))));
    v7 = ((v7) + (((v9) * (v9))));
  }
  if (((((v6) <= (0.000000000001))) || (((v7) <= (0.000000000001))))) {
    return 1.0;
  } else {
    return Math.min(Math.max(((v5) / (((Math.sqrt(v6)) * (Math.sqrt(v7))))), (-(1.0))), 1.0);
  }
}
