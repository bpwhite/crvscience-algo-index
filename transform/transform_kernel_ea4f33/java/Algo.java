// SPDX-License-Identifier: GPL-3.0-only
public final class Algo {
    private Algo() {}

    public static double transformKernel(double a, double b, double c, double d, double a4, double a5) {
        double v0 = ((a) * (Math.cos(d)));
        double v1 = ((a) * (Math.sin(d)));
        double v2 = ((b) - (((c) * (Math.cos(a4)))));
        double v3 = ((((c) * (Math.sin(a4)))) * (Math.cos(a5)));
        double v4 = ((((c) * (Math.sin(a4)))) * (Math.sin(a5)));
        double v5 = ((v0) - (v2));
        double v6 = ((v1) - (v3));
        return Math.sqrt(((((((v5) * (v5))) + (((v6) * (v6))))) + (((v4) * (v4)))));
    }
}
