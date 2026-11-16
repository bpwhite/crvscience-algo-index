// SPDX-License-Identifier: GPL-3.0-only
public final class Algo {
    private Algo() {}

    public static double kl(double[] xs, double[] ys) {
        double v0 = 0.0;
        for (long i = (0L); i < (4L); ++i) {
            if (((((xs[(int)(i)]) > (0.0))) && (((ys[(int)(i)]) > (0.0))))) {
                v0 = ((v0) + (((xs[(int)(i)]) * (((Math.log(((xs[(int)(i)]) / (ys[(int)(i)])))) / (0.69314718056))))));
            }
        }
        return v0;
    }
}
