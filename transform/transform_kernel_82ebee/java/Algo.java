// SPDX-License-Identifier: GPL-3.0-only
public final class Algo {
    private Algo() {}

    public static double transformKernel(double a, double b, double c) {
        double v0 = Math.min(Math.max(a, 0.0), 1.0);
        double v1 = ((Math.min(Math.max(b, 0.0), 1200.0)) / (1000.0));
        double v2 = Math.min(Math.max(c, 0.02), 0.85);
        double v3 = Math.max(((((((0.41) * (v0))) + (((0.67) * (v1))))) + (((0.7) * (v2)))), 0.0001);
        double v4 = ((3.63) / (v3));
        return ((4.0) * (v4));
    }
}
