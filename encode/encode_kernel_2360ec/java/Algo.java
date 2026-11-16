// SPDX-License-Identifier: GPL-3.0-only
public final class Algo {
    private Algo() {}

    public static void encodeKernel(long[] buf, long k) {
        buf[(int)(((long)(((int)(k)) >> (((int)(3L)) & 31))))] = ((long)(((int)(buf[(int)(((long)(((int)(k)) >> (((int)(3L)) & 31))))])) ^ ((int)(((long)(((int)(1L)) << (((int)(((long)(((int)(k)) & ((int)(7L)))))) & 31)))))));
    }
}
