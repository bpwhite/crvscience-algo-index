// SPDX-License-Identifier: GPL-3.0-only
public final class Algo {
    private Algo() {}

    public static double transformKernel(double a, double b, double c) {
        if (((a) <= (b))) {
            return 1.0;
        } else {
            if (((a) >= (c))) {
                return 0.05;
            } else {
                return ((1.0) - (((0.95) * (((((a) - (b))) / (Math.max(((c) - (b)), 0.000000001)))))));
            }
        }
    }
}
