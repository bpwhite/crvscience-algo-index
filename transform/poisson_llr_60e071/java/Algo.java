// SPDX-License-Identifier: GPL-3.0-only
public final class Algo {
    private Algo() {}

    public static double poissonLlr(double a, double b, double c) {
        if (((((((a) <= (b))) || (((b) <= (0.0))))) || (((((c) - (b))) <= (0.0))))) {
            return 0.0;
        }
        double v0 = Math.max(((c) - (a)), 0.0);
        double v1 = ((c) - (b));
        double v2 = ((a) * (Math.log(((a) / (b)))));
        double v3 = 0.0;
        if (((v0) > (0.0))) {
            v3 = ((v0) * (Math.log(((v0) / (v1)))));
        } else {
            v3 = 0.0;
        }
        return Math.max(((v2) + (v3)), 0.0);
    }
}
