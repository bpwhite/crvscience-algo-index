// SPDX-License-Identifier: GPL-3.0-only
export function transformKernel(xs, a) {
  if (((xs.length) === (0))) {
    return 0.0;
  }
  const v0 = ((Math.min(Math.max(a, 0.0), 1.0)) * (Number(((xs.length) - (1)))));
  const v1 = Math.trunc(Number(Math.floor(v0)));
  const v2 = Math.trunc(Number(Math.ceil(v0)));
  const v3 = ((v0) - (Number(v1)));
  return ((((xs[v1]) * (((1.0) - (v3))))) + (((xs[v2]) * (v3))));
}
