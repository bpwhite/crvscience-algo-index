// SPDX-License-Identifier: GPL-3.0-only
public final class Algo {
    private Algo() {}

    public static long encodeKernel(long[] xs, long k) {
        if (((((long)(((int)(xs[(int)(((long)(((int)(k)) >> (((int)(3L)) & 31))))])) & ((int)(((long)(((int)(1L)) << (((int)(((long)(((int)(k)) & ((int)(7L)))))) & 31)))))))) != (0L))) {
            return 1L;
        } else {
            return 0L;
        }
    }
}
