// SPDX-License-Identifier: GPL-3.0-only
export function transformKernel(k) {
  if (((k) < (15))) {
    return 3;
  }
  const v0 = Number(k);
  let v1 = 1.0;
  let v2 = 1;
  for (let i = (1); i <= (35); ++i) {
    const v3 = Number(i);
    const v4 = ((1.0) - (((((v3) * (((v3) + (1.0))))) / (Math.max(((2.5) * (v0)), 20.0)))));
    if (((v4) <= (0.0))) {
      break;
    }
    v1 = ((v1) * (v4));
    if (((v1) >= (0.95))) {
      v2 = i;
    } else {
      break;
    }
  }
  return Math.max(v2, 2);
}
