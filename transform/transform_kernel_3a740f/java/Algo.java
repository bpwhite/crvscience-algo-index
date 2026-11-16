// SPDX-License-Identifier: GPL-3.0-only
public final class Algo {
    private Algo() {}

    public static double transformKernel(double a) {
        if (((a) >= (0.0))) {
            return ((1.0) / (((1.0) + (Math.exp((-(a)))))));
        } else {
            double v0 = Math.exp(a);
            return ((v0) / (((1.0) + (v0))));
        }
    }
}
