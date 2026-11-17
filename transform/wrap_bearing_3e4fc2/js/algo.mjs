// SPDX-License-Identifier: GPL-3.0-only
export function wrapBearing(a) {
  let v0 = a;
  while (((v0) > (180.0))) {
    v0 = ((v0) - (360.0));
  }
  while (((v0) < ((-(180.0))))) {
    v0 = ((v0) + (360.0));
  }
  return v0;
}
