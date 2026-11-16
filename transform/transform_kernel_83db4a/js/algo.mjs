// SPDX-License-Identifier: GPL-3.0-only
export function transformKernel(a, b) {
  if (((a) <= (b))) {
    return (-(745.0));
  }
  const v0 = ((b) - (a));
  if (((v0) < ((-(50.0))))) {
    return a;
  } else {
    return ((a) + (Math.log(Math.max(((1.0) - (Math.exp(v0))), 0.0))));
  }
}
