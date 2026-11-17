// SPDX-License-Identifier: GPL-3.0-only
public final class Algo {
    private Algo() {}

    public static double density(double a, double b, double c) {
        double v0 = ((((((999.842594) + (((0.06793952) * (a))))) - (((0.00909529) * (Math.pow(a, ((double)(2L)))))))) + (((0.0001001685) * (Math.pow(a, ((double)(3L)))))));
        double v1 = ((((0.824493) - (((0.0040899) * (a))))) * (b));
        double v2 = ((0.0045) * (c));
        return ((((v0) + (v1))) + (v2));
    }
}
