// SPDX-License-Identifier: GPL-3.0-only
public final class Algo {
    private Algo() {}

    public static double inferKernel(double[] xs, double[] ys) {
        double v0 = 0.0;
        for (long i = (1L); i < (Math.min(((long)xs.length), ((long)ys.length))); ++i) {
            double v1 = ((xs[(int)(i)]) - (xs[(int)(((i) - (1L)))]));
            if (((v1) > (0.0))) {
                v0 = ((v0) + (((((0.5) * (((ys[(int)(((i) - (1L)))]) + (ys[(int)(i)]))))) * (v1))));
            }
        }
        return v0;
    }
}
