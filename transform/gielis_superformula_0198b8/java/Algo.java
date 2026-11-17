// SPDX-License-Identifier: GPL-3.0-only
public final class Algo {
    private Algo() {}

    public static double gielisSuperformula(double a, double b, double c, double d, double a4, double a5, double a6) {
        double v0 = Math.pow(Math.abs(((Math.cos(((((b) * (a))) * (0.25)))) / (c))), a5);
        double v1 = Math.pow(Math.abs(((Math.sin(((((b) * (a))) * (0.25)))) / (d))), a6);
        double v2 = Math.max(((v0) + (v1)), 0.000000001);
        return Math.pow(v2, (((-(1.0))) / (Math.max(a4, 0.1))));
    }
}
