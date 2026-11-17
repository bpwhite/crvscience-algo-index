// SPDX-License-Identifier: GPL-3.0-only
public final class Algo {
    private Algo() {}

    public static double transformKernel(double a, double b, double c, double d) {
        double v0 = Math.max(a, 0.0);
        double v1 = Math.max(c, 0.000000001);
        double v2 = Math.max(d, 0.000000001);
        double v3 = ((((v1) + (v0))) + (v2));
        double v4 = Math.sqrt(Math.max(((((v3) * (v3))) - (((((4.0) * (v1))) * (v0)))), 0.0));
        double v5 = Math.min(Math.max(((((v3) - (v4))) / (((2.0) * (v1)))), 0.0), 1.0);
        return ((b) * (((1.0) - (v5))));
    }
}
