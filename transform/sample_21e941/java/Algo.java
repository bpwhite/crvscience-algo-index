// SPDX-License-Identifier: GPL-3.0-only
public final class Algo {
    private Algo() {}

    public static long sample(double a, double b) {
        if (((a) <= (0.000000000001))) {
            return 0L;
        }
        double v0 = Math.min(a, 25.0);
        double v1 = Math.exp((-(v0)));
        double v2 = v1;
        if (((b) <= (v2))) {
            return 0L;
        }
        for (long i = (1L); i <= (48L); ++i) {
            v1 = ((v1) * (((v0) / (((double)(i))))));
            v2 = ((v2) + (v1));
            if (((b) <= (v2))) {
                return i;
            }
        }
        return 48L;
    }
}
