// SPDX-License-Identifier: GPL-3.0-only
export function sigmoid(a) {
  if (((a) >= (0.0))) {
    return ((1.0) / (((1.0) + (Math.exp((-(a)))))));
  } else {
    const v0 = Math.exp(a);
    return ((v0) / (((1.0) + (v0))));
  }
}
