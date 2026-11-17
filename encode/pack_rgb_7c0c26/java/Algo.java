// SPDX-License-Identifier: GPL-3.0-only
public final class Algo {
    private Algo() {}

    public static long packRgb(long k, long m, long q) {
        return ((long)(((int)(((long)(((int)(((long)(((int)(k)) << (((int)(16L)) & 31))))) | ((int)(((long)(((int)(m)) << (((int)(8L)) & 31))))))))) | ((int)(q))));
    }
}
