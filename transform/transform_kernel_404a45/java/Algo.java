// SPDX-License-Identifier: GPL-3.0-only
public final class Algo {
    private Algo() {}

    public static double transformKernel(double a, double b, double c, double d) {
        double v0 = Math.max(a, 0.0);
        double v1 = Math.min(Math.max(b, 0.0), 1.0);
        double v2 = ((Math.min(Math.max(c, 0.0), 1200.0)) / (1000.0));
        double v3 = Math.min(Math.max(d, 0.02), 0.85);
        double v4 = (((-(3.63))) + (((v0) * (((((((0.41) * (v1))) + (((0.67) * (v2))))) + (((0.7) * (v3))))))));
        if (((v4) >= (35.0))) {
            return 1.0;
        } else {
            if (((v4) <= ((-(35.0))))) {
                return 0.0;
            } else {
                double v5 = Math.exp(v4);
                return ((v5) / (((1.0) + (v5))));
            }
        }
    }
}
