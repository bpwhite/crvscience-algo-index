// SPDX-License-Identifier: GPL-3.0-only
export function transformKernel(a, b, c, d) {
  const v0 = Math.max(a, 0.0);
  const v1 = Math.min(Math.max(b, 0.0), 1.0);
  const v2 = ((Math.min(Math.max(c, 0.0), 1200.0)) / (1000.0));
  const v3 = Math.min(Math.max(d, 0.02), 0.85);
  const v4 = (((-(3.63))) + (((v0) * (((((((0.41) * (v1))) + (((0.67) * (v2))))) + (((0.7) * (v3))))))));
  if (((v4) >= (35.0))) {
    return 1.0;
  } else {
    if (((v4) <= ((-(35.0))))) {
      return 0.0;
    } else {
      const v5 = Math.exp(v4);
      return ((v5) / (((1.0) + (v5))));
    }
  }
}
