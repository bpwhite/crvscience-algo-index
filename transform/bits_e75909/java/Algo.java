// SPDX-License-Identifier: GPL-3.0-only
public final class Algo {
    private Algo() {}

    public static double bits(double a, double b, double c, long k) {
        double v0 = 2.0;
        double v1 = 0.0;
        if (((k) <= (1L))) {
            v1 = 0.0;
        } else {
            v1 = ((((double)(k))) / (((((double)(k))) + (8.0))));
        }
        double v2 = Math.min(Math.max(((((((1.0) - (v1))) * (Math.min(Math.max(b, 0.05), 1.0)))) + (((v1) * (Math.min(Math.max(c, 0.08), 1.0))))), 0.06), 1.0);
        return ((v0) + (((Math.max(((a) - (v0)), 0.0)) * (v2))));
    }
}
