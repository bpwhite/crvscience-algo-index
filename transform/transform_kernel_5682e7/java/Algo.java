// SPDX-License-Identifier: GPL-3.0-only
public final class Algo {
    private Algo() {}

    public static double transformKernel(long k, long m, long q, long p) {
        long v0 = Math.max(k, q);
        long v1 = Math.min(m, p);
        if (((v1) < (v0))) {
            return 0.0;
        }
        double v2 = ((double)(((((v1) - (v0))) + (1L))));
        double v3 = ((((double)(((((((m) - (k))) + (1L))) + (((((p) - (q))) + (1L))))))) - (v2));
        if (((v3) <= (0.0))) {
            return 1.0;
        } else {
            return ((v2) / (v3));
        }
    }
}
