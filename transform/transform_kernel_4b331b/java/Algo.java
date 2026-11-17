// SPDX-License-Identifier: GPL-3.0-only
public final class Algo {
    private Algo() {}

    public static double transformKernel(double a, double b, double c) {
        double v0 = Math.max(((a) + (273.15)), 180.0);
        double v1 = Math.min(Math.max(((b) / (Math.max(((1.0) - (b)), 0.9))), 0.000001), 0.05);
        double v2 = Math.max(((((c) * (v1))) / (((0.622) + (v1)))), 0.0001);
        double v3 = ((((2840.0) / (((((((3.5) * (Math.log(v0)))) - (Math.log(v2)))) - (4.805))))) + (55.0));
        double v4 = ((((v0) * (Math.pow(((1000.0) / (Math.max(((c) - (v2)), 10.0))), 0.2854)))) * (Math.pow(((v0) / (v3)), ((0.28) * (v1)))));
        return ((v4) * (Math.exp(((((((((3036.0) / (v3))) - (1.78))) * (v1))) * (((1.0) + (((0.448) * (v1)))))))));
    }
}
