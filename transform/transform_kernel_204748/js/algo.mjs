// SPDX-License-Identifier: GPL-3.0-only
export function transformKernel(a) {
  let v0 = 0.0;
  if (((a) < (0.0))) {
    v0 = (-(1.0));
  } else {
    v0 = 1.0;
  }
  const v1 = Math.abs(a);
  const v2 = ((1.0) / (((1.0) + (((0.3275911) * (v1))))));
  const v3 = ((1.0) - (((((((((((((((((((((1.061405429) * (v2))) - (1.453152027))) * (v2))) + (1.421413741))) * (v2))) - (0.284496736))) * (v2))) + (0.254829592))) * (v2))) * (Math.exp((((-(v1))) * (v1)))))));
  return ((v0) * (v3));
}
