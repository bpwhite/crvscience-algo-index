// SPDX-License-Identifier: GPL-3.0-only
export function transformKernel(a, b, c) {
  if (((((Math.abs(a)) <= (0.03))) && (((Math.abs(b)) <= (0.03))))) {
    return 0.0;
  } else {
    if (((b) < ((-(0.02))))) {
      return Math.min(Math.max(((0.42) + (((0.55) * ((-(b)))))), 0.35), 0.92);
    } else {
      const v0 = ((1.0) / (((1.0) + (((0.65) * (Math.max(c, 0.0)))))));
      return Math.min(Math.max(((((0.042) / (((0.55) + (b))))) * (v0)), 0.008), 0.065);
    }
  }
}
