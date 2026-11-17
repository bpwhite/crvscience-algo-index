// SPDX-License-Identifier: GPL-3.0-only
export function binaryEntropy(a) {
  const v0 = Math.min(Math.max(a, 0.0), 1.0);
  if (((((v0) <= (0.0))) || (((v0) >= (((1.0) - (0.0))))))) {
    return 0.0;
  }
  return (((((-(v0))) * (((Math.log(v0)) / (0.69314718056))))) - (((((1.0) - (v0))) * (((Math.log(((1.0) - (v0)))) / (0.69314718056))))));
}
