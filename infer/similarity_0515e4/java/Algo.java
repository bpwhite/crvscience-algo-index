// SPDX-License-Identifier: GPL-3.0-only
public final class Algo {
    private Algo() {}

    public static double similarity(double[] xs, double[] ys) {
        long v0 = Math.min(((long)xs.length), ((long)ys.length));
        if (((v0) == (0L))) {
            return 0.0;
        }
        double v1 = 0.0;
        for (long i = (0L); i < (v0); ++i) {
            v1 = ((v1) + (Math.abs(((xs[(int)(i)]) - (ys[(int)(i)])))));
        }
        return ((1.0) / (((1.0) + (((v1) / (((double)(v0))))))));
    }
}
