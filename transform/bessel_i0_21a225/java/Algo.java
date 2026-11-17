// SPDX-License-Identifier: GPL-3.0-only
public final class Algo {
    private Algo() {}

    public static double besselI0(double a) {
        double v0 = 1.0;
        double v1 = 1.0;
        double v2 = ((((0.25) * (a))) * (a));
        for (long i = (1L); i < (28L); ++i) {
            v1 = ((v1) * (((v2) / (((double)(((i) * (i))))))));
            v0 = ((v0) + (v1));
            if (((v1) < (((0.0) * (v0))))) {
                break;
            }
        }
        return v0;
    }
}
