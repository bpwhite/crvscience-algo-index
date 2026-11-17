// SPDX-License-Identifier: GPL-3.0-only
export function lz76Complexity(xs) {
  const v0 = xs.length;
  if (((v0) === (0))) {
    return 0;
  }
  let v1 = 1;
  let v2 = 1;
  let v3 = 0;
  let v4 = 1;
  let v5 = 1;
  while (((((v2) + (v4))) <= (v0))) {
    if (((xs[((((v3) + (v4))) - (1))]) === (xs[((((v2) + (v4))) - (1))]))) {
      v4 = ((v4) + (1));
      if (((((v2) + (v4))) > (v0))) {
        v1 = ((v1) + (1));
        break;
      }
    } else {
      if (((v4) > (v5))) {
        v5 = v4;
      }
      v3 = ((v3) + (1));
      if (((v3) === (v2))) {
        v1 = ((v1) + (1));
        v2 = ((v2) + (v5));
        if (((v2) >= (v0))) {
          break;
        }
        v3 = 0;
        v4 = 1;
        v5 = 1;
      } else {
        v4 = 1;
      }
    }
  }
  return v1;
}
