// SPDX-License-Identifier: GPL-3.0-only
public final class Algo {
    private Algo() {}

    public static double transformKernel(double a) {
        double v0 = ((a) / (1.414213562373));
        double v1 = 0.0;
        if (((v0) < (0.0))) {
            v1 = (-(1.0));
        } else {
            v1 = 1.0;
        }
        double v2 = Math.abs(v0);
        double v3 = ((1.0) / (((1.0) + (((0.3275911) * (v2))))));
        double v4 = ((1.0) - (((((((((((((((((((((1.061405429) * (v3))) - (1.453152027))) * (v3))) + (1.421413741))) * (v3))) - (0.284496736))) * (v3))) + (0.254829592))) * (v3))) * (Math.exp((((-(v2))) * (v2)))))));
        return ((0.5) * (((1.0) + (((v1) * (v4))))));
    }
}
