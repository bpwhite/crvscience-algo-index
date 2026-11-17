// SPDX-License-Identifier: GPL-3.0-only
public final class Algo {
    private Algo() {}

    public static double shannonEntropy(long[] xs) {
        long __sum_acc_0 = 0L;
        for (long i = (0L); i < (((long)xs.length)); ++i) {
            __sum_acc_0 = ((__sum_acc_0) + (xs[(int)(i)]));
        }
        long v1 = __sum_acc_0;
        if (((v1) == (0L))) {
            return 0.0;
        }
        double v2 = ((double)(v1));
        double v3 = 0.0;
        for (long j = (0L); j < (((long)xs.length)); ++j) {
            long v4 = xs[(int)(j)];
            if (((v4) > (0L))) {
                double v5 = ((((double)(v4))) / (v2));
                v3 = ((v3) - (((v5) * (((Math.log(v5)) / (0.69314718056))))));
            }
        }
        return v3;
    }
}
