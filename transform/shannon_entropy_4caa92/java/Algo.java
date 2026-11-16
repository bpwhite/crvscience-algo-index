// SPDX-License-Identifier: GPL-3.0-only
public final class Algo {
    private Algo() {}

    public static double shannonEntropy(long[] xs) {
        long v0 = 0L;
        for (long i = (0L); i < (((long)xs.length)); ++i) {
            v0 = ((v0) + (xs[(int)(i)]));
        }
        if (((v0) == (0L))) {
            return 0.0;
        }
        double v1 = ((double)(v0));
        double v2 = 0.0;
        for (long j = (0L); j < (((long)xs.length)); ++j) {
            long v3 = xs[(int)(j)];
            if (((v3) > (0L))) {
                double v4 = ((((double)(v3))) / (v1));
                v2 = ((v2) - (((v4) * (((Math.log(v4)) / (0.69314718056))))));
            }
        }
        return v2;
    }
}
