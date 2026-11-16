// SPDX-License-Identifier: GPL-3.0-only
public final class Algo {
    private Algo() {}

    public static long encodeKernel(long k, long m, long q, long p) {
        return ((long)(((int)(((long)(((int)(((long)(((int)(k)) | ((int)(((long)(((int)(m)) << (((int)(8L)) & 31))))))))) | ((int)(((long)(((int)(q)) << (((int)(16L)) & 31))))))))) | ((int)(((long)(((int)(p)) << (((int)(24L)) & 31)))))));
    }
}
