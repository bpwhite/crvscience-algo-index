// SPDX-License-Identifier: GPL-3.0-only
export function transformKernel(a) {
  const v0 = Math.min(Math.max(a, 0.0), 40.0);
  return ((((((1800.6) - (((120.1) * (v0))))) + (((((3.7818) * (v0))) * (v0))))) - (((((((0.047608) * (v0))) * (v0))) * (v0))));
}
