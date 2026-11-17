// SPDX-License-Identifier: GPL-3.0-only
public final class Algo {
    private Algo() {}

    public static double transformKernel(double a, long k, double b) {
        double v0 = ((double)(Math.max(k, 2L)));
        double v1 = Math.min(Math.max(a, ((1.0) / (v0))), 0.999999);
        double v2 = ((1.0) - (v1));
        double v3 = 0.0;
        if (((v2) <= (0.000000001))) {
            v3 = 0.0;
        } else {
            v3 = (-(((((v1) * (((Math.log(v1)) / (0.69314718056))))) + (((v2) * (((Math.log(((v2) / (((v0) - (1.0)))))) / (0.69314718056))))))));
        }
        double v4 = Math.min(Math.max(((1.0) - (((v3) / (((Math.log(v0)) / (0.69314718056)))))), 0.0), 1.0);
        return ((b) * (v4));
    }
}
