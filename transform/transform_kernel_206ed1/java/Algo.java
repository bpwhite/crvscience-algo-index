// SPDX-License-Identifier: GPL-3.0-only
public final class Algo {
    private Algo() {}

    public static double transformKernel(boolean flag0, double a, double b, double c) {
        if ((!(flag0))) {
            return 0.0;
        }
        double v0 = ((((((1.0) - (Math.min(Math.max(a, 0.0), 1.0)))) * (((1.0) - (Math.min(Math.max(b, 0.0), 1.0)))))) * (((1.0) - (Math.min(Math.max(c, 0.0), 1.0)))));
        return Math.min(Math.max(((1.0) - (v0)), 0.0), 1.0);
    }
}
