// SPDX-License-Identifier: GPL-3.0-only
public final class Algo {
    private Algo() {}

    public static double percentileSorted(double[] xs, double a) {
        if (((((long)xs.length)) == (0L))) {
            return 0.0;
        }
        double v0 = ((Math.min(Math.max(a, 0.0), 1.0)) * (((double)(((((long)xs.length)) - (1L))))));
        long v1 = ((long)(Math.floor(v0)));
        long v2 = ((long)(Math.ceil(v0)));
        if (((v1) == (v2))) {
            return xs[(int)(v1)];
        } else {
            double v3 = ((v0) - (((double)(v1))));
            return ((((xs[(int)(v1)]) * (((1.0) - (v3))))) + (((xs[(int)(v2)]) * (v3))));
        }
    }
}
