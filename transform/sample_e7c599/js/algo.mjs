// SPDX-License-Identifier: GPL-3.0-only
export function sample(a, b) {
  if (((a) <= (0.000000000001))) {
    return 0;
  }
  const v0 = Math.min(a, 45.0);
  let v1 = Math.exp((-(v0)));
  let v2 = v1;
  if (((b) <= (v2))) {
    return 0;
  }
  for (let i = (1); i <= (96); ++i) {
    v1 = ((v1) * (((v0) / (Number(i)))));
    v2 = ((v2) + (v1));
    if (((b) <= (v2))) {
      return i;
    }
  }
  return 96;
}
