// SPDX-License-Identifier: GPL-3.0-only
public final class Algo {
    private Algo() {}

    public static double measureKernel(double[] xs, double[] ys) {
        long v0 = Math.min(((long)xs.length), ((long)ys.length));
        if (((v0) < (2L))) {
            return 0.0;
        }
        double __sum_acc_1 = 0.0;
        for (long i = (0L); i < (v0); ++i) {
            __sum_acc_1 = ((__sum_acc_1) + (xs[(int)(i)]));
        }
        double v2 = ((__sum_acc_1) / (((double)(v0))));
        double __sum_acc_3 = 0.0;
        for (long j = (0L); j < (v0); ++j) {
            __sum_acc_3 = ((__sum_acc_3) + (ys[(int)(j)]));
        }
        double v4 = ((__sum_acc_3) / (((double)(v0))));
        double v5 = 0.0;
        double v6 = 0.0;
        double v7 = 0.0;
        for (long t = (0L); t < (v0); ++t) {
            double v8 = ((xs[(int)(t)]) - (v2));
            double v9 = ((ys[(int)(t)]) - (v4));
            v5 = ((v5) + (((v8) * (v9))));
            v6 = ((v6) + (((v8) * (v8))));
            v7 = ((v7) + (((v9) * (v9))));
        }
        double v10 = Math.sqrt(((v6) * (v7)));
        if (((v10) < (0.000000000001))) {
            return 0.0;
        } else {
            return Math.min(Math.max(((v5) / (v10)), (-(1.0))), 1.0);
        }
    }
}
