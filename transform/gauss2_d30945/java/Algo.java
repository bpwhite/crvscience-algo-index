// SPDX-License-Identifier: GPL-3.0-only
public final class Algo {
    private Algo() {}

    public static double gauss2(double a, double b, double c, double d, double a4, double a5) {
        double v0 = ((b) - (d));
        if (((v0) > (180.0))) {
            v0 = ((v0) - (360.0));
        } else {
            if (((v0) < ((-(180.0))))) {
                v0 = ((v0) + (360.0));
            }
        }
        double v1 = ((((a) - (c))) / (a4));
        double v2 = ((v0) / (a5));
        return Math.exp((-(((((v1) * (v1))) + (((v2) * (v2)))))));
    }
}
