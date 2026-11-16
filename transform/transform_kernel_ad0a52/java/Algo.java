// SPDX-License-Identifier: GPL-3.0-only
public final class Algo {
    private Algo() {}

    public static double transformKernel(long k, long m, long q) {
        if (((k) < (20L))) {
            return 0.5;
        }
        double v0 = ((((double)(m))) / (((double)(k))));
        double v1 = ((((double)(q))) / (((double)(k))));
        double v2 = Math.max(((((1.0) - (((2.0) * (v0))))) - (v1)), 0.01);
        double v3 = Math.max(((1.0) - (((2.0) * (v1)))), 0.01);
        return Math.min(Math.max((((((-(0.5))) * (Math.log(v2)))) - (((0.25) * (Math.log(v3))))), 0.0), 1.5);
    }
}
