// SPDX-License-Identifier: GPL-3.0-only
public final class Algo {
    private Algo() {}

    public static boolean hasBit64(long k, long m, long q) {
        if (((q) < (32L))) {
            return ((((long)(((int)(k)) & ((int)(((long)(((int)(1L)) << (((int)(q)) & 31)))))))) != (0L));
        } else {
            return ((((long)(((int)(m)) & ((int)(((long)(((int)(1L)) << (((int)(((q) - (32L)))) & 31)))))))) != (0L));
        }
    }
}
