// SPDX-License-Identifier: GPL-3.0-only
export function transformKernel(a, b, c, d, a4, a5) {
  const v0 = ((a) * (Math.cos(d)));
  const v1 = ((a) * (Math.sin(d)));
  const v2 = ((b) - (((c) * (Math.cos(a4)))));
  const v3 = ((((c) * (Math.sin(a4)))) * (Math.cos(a5)));
  const v4 = ((((c) * (Math.sin(a4)))) * (Math.sin(a5)));
  const v5 = ((v0) - (v2));
  const v6 = ((v1) - (v3));
  return Math.sqrt(((((((v5) * (v5))) + (((v6) * (v6))))) + (((v4) * (v4)))));
}
