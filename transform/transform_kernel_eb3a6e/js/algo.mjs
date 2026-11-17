// SPDX-License-Identifier: GPL-3.0-only
export function transformKernel(a) {
  const v0 = ((Math.min(Math.max(a, 0.0), 40.0)) + (273.15));
  const v1 = (((((((((-(139.34411))) + (((157570.100000000006) / (v0))))) - (((66423080.0) / (((v0) * (v0))))))) + (((12438000000.0) / (((((v0) * (v0))) * (v0))))))) - (((862194900000.0) / (((((((v0) * (v0))) * (v0))) * (v0))))));
  return Math.exp(v1);
}
