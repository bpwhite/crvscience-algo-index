// SPDX-License-Identifier: GPL-3.0-only
public final class Algo {
    private Algo() {}

    public static double transformKernel(long k, double a) {
        double v0 = Math.min(Math.max(a, 0.5), 3.0);
        double v1 = ((Math.log(((double)(Math.max(k, 40L))))) / (2.302585092994));
        double v2 = Math.max(((4.35) - (((0.28) * (((v0) - (1.0)))))), 3.4);
        double v3 = Math.max(((1.75) - (((0.15) * (((v0) - (1.0)))))), 1.3);
        double v4 = ((((v2) - (v1))) / (((v2) - (v3))));
        return Math.min(Math.max(v4, 0.03), 0.96);
    }
}
