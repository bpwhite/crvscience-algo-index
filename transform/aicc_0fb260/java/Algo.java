// SPDX-License-Identifier: GPL-3.0-only
public final class Algo {
    private Algo() {}

    public static double aicc(long k, double a, long m) {
        double v0 = ((double)(k));
        double v1 = ((double)(m));
        double v2 = Math.max(((a) / (Math.max(v0, 1.0))), 0.0);
        double v3 = ((((v0) * (Math.log(v2)))) + (((2.0) * (v1))));
        if (((k) > (((m) + (1L))))) {
            return ((v3) + (((((((2.0) * (v1))) * (((v1) + (1.0))))) / (((double)(((((k) - (m))) - (1L))))))));
        } else {
            return ((v3) + (100.0));
        }
    }
}
