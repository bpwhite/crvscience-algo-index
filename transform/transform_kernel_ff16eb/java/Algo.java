// SPDX-License-Identifier: GPL-3.0-only
public final class Algo {
    private Algo() {}

    public static double transformKernel(double a, double b, double c) {
        if (((((b) <= (0.0001))) || (((a) <= (0.1))))) {
            return 0.0;
        }
        double v0 = ((((((4.22) + (((0.39) * (Math.sqrt(Math.max(a, 0.0))))))) + (((0.36) * (Math.log(Math.max(b, 0.005))))))) + (((0.13) * (Math.sqrt(Math.max(c, 5.0))))));
        return Math.exp(Math.min(Math.max(v0, (-(5.0))), 14.2));
    }
}
