// SPDX-License-Identifier: GPL-3.0-only
public final class Algo {
    private Algo() {}

    public static double transformKernel(double a, double b, double c, double d, double a4) {
        double v0 = ((a4) * (a4));
        double v1 = ((v0) * (a4));
        return ((0.5) * (((((((((2.0) * (b))) + ((((((-(a))) + (c))) * (a4))))) + (((((((((((2.0) * (a))) - (((5.0) * (b))))) + (((4.0) * (c))))) - (d))) * (v0))))) + ((((((((((-(a))) + (((3.0) * (b))))) - (((3.0) * (c))))) + (d))) * (v1))))));
    }
}
