// SPDX-License-Identifier: GPL-3.0-only
public final class Algo {
    private Algo() {}

    public static double qkdSecretBitsSifted(long k, double a) {
        double v0 = ((double)(Math.max(k, 2L)));
        double v1 = ((((v0) - (1.0))) / (v0));
        double v2 = Math.min(Math.max(a, 0.0), v1);
        if (((v2) <= (0.0))) {
            return ((Math.log(v0)) / (0.69314718056));
        }
        if (((v2) >= (((v1) - (0.000000000001))))) {
            return 0.0;
        }
        double v3 = (((((-(v2))) * (((Math.log(((v2) / (((v0) - (1.0)))))) / (0.69314718056))))) - (((((1.0) - (v2))) * (((Math.log(((1.0) - (v2)))) / (0.69314718056))))));
        return Math.max(((((Math.log(v0)) / (0.69314718056))) - (((2.0) * (v3)))), 0.0);
    }
}
