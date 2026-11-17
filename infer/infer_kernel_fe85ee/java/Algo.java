// SPDX-License-Identifier: GPL-3.0-only
public final class Algo {
    private Algo() {}

    public static double inferKernel(double[] xs) {
        double v0 = 0.0;
        double v1 = 0.0;
        for (long i = (0L); i < (((long)xs.length)); ++i) {
            double v2 = xs[(int)(i)];
            double v3 = ((v2) - (v0));
            v1 = ((v1) + (((v3) * (v3))));
            v0 = v2;
        }
        return ((v1) + (((v0) * (v0))));
    }
}
