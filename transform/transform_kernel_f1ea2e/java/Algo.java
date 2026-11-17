// SPDX-License-Identifier: GPL-3.0-only
public final class Algo {
    private Algo() {}

    public static long transformKernel(long k) {
        if (((k) < (15L))) {
            return 3L;
        }
        double v0 = ((double)(k));
        double v1 = 1.0;
        long v2 = 1L;
        for (long i = (1L); i <= (35L); ++i) {
            double v3 = ((double)(i));
            double v4 = ((1.0) - (((((v3) * (((v3) + (1.0))))) / (Math.max(((2.5) * (v0)), 20.0)))));
            if (((v4) <= (0.0))) {
                break;
            }
            v1 = ((v1) * (v4));
            if (((v1) >= (0.95))) {
                v2 = i;
            } else {
                break;
            }
        }
        return Math.max(v2, 2L);
    }
}
