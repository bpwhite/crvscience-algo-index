// SPDX-License-Identifier: GPL-3.0-only
public final class Algo {
    private Algo() {}

    public static double transformKernel(double a, double b) {
        if (((a) <= (b))) {
            return (-(745.0));
        }
        double v0 = ((b) - (a));
        if (((v0) < ((-(50.0))))) {
            return a;
        } else {
            return ((a) + (Math.log(Math.max(((1.0) - (Math.exp(v0))), 0.0))));
        }
    }
}
