// SPDX-License-Identifier: GPL-3.0-only
public final class Algo {
    private Algo() {}

    public static long lz76Complexity(long[] xs) {
        long v0 = ((long)xs.length);
        if (((v0) == (0L))) {
            return 0L;
        }
        long v1 = 1L;
        long v2 = 1L;
        long v3 = 0L;
        long v4 = 1L;
        long v5 = 1L;
        while (((((v2) + (v4))) <= (v0))) {
            if (((xs[(int)(((((v3) + (v4))) - (1L)))]) == (xs[(int)(((((v2) + (v4))) - (1L)))]))) {
                v4 = ((v4) + (1L));
                if (((((v2) + (v4))) > (v0))) {
                    v1 = ((v1) + (1L));
                    break;
                }
            } else {
                if (((v4) > (v5))) {
                    v5 = v4;
                }
                v3 = ((v3) + (1L));
                if (((v3) == (v2))) {
                    v1 = ((v1) + (1L));
                    v2 = ((v2) + (v5));
                    if (((v2) >= (v0))) {
                        break;
                    }
                    v3 = 0L;
                    v4 = 1L;
                    v5 = 1L;
                } else {
                    v4 = 1L;
                }
            }
        }
        return v1;
    }
}
