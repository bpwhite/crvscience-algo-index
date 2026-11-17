// SPDX-License-Identifier: GPL-3.0-only
export function poissonLlr(a, b, c) {
  if (((((((a) <= (b))) || (((b) <= (0.0))))) || (((((c) - (b))) <= (0.0))))) {
    return 0.0;
  }
  const v0 = Math.max(((c) - (a)), 0.0);
  const v1 = ((c) - (b));
  const v2 = ((a) * (Math.log(((a) / (b)))));
  let v3 = 0.0;
  if (((v0) > (0.0))) {
    v3 = ((v0) * (Math.log(((v0) / (v1)))));
  } else {
    v3 = 0.0;
  }
  return Math.max(((v2) + (v3)), 0.0);
}
