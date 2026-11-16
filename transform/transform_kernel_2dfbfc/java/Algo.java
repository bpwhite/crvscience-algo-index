// SPDX-License-Identifier: GPL-3.0-only
public final class Algo {
    private Algo() {}

    public static double transformKernel(double a, double b) {
        if (((a) < (((40.0) * (b))))) {
            double v0 = Math.exp(((a) / (b)));
            return ((100.0) * (((v0) / (((v0) + (1.0))))));
        } else {
            return 99.99;
        }
    }
}
