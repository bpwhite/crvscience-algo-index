// SPDX-License-Identifier: GPL-3.0-only
public final class Algo {
    private Algo() {}

    public static double transformKernel(double a) {
        double v0 = Math.abs(a);
        double v1 = ((1.0) / (((1.0) + (((0.5) * (v0))))));
        double v2 = ((v1) * (Math.exp((((((((-(v0))) * (v0))) - (1.26551223))) + (((v1) * (((1.00002368) + (((v1) * (((0.37409196) + (((v1) * (((0.09678418) + (((v1) * ((((-(0.18628806))) + (((v1) * (((0.27886807) + (((v1) * ((((-(1.13520398))) + (((v1) * (((1.48851587) + (((v1) * ((((-(0.82215223))) + (((v1) * (0.17087277)))))))))))))))))))))))))))))))))))))));
        if (((a) >= (0.0))) {
            return ((1.0) - (v2));
        } else {
            return ((v2) - (1.0));
        }
    }
}
