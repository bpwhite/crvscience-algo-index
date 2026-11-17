// SPDX-License-Identifier: GPL-3.0-only
public final class Algo {
    private Algo() {}

    public static double standardNormalSf(double a) {
        double v0 = ((a) / (1.414213562373));
        double v1 = ((1.0) / (((1.0) + (((0.3275911) * (Math.abs(v0)))))));
        double v2 = ((v1) * (((0.254829592) + (((v1) * ((((-(0.284496736))) + (((v1) * (((1.421413741) + (((v1) * ((((-(1.453152027))) + (((v1) * (1.061405429))))))))))))))))));
        double v3 = ((v2) * (Math.exp((((-(v0))) * (v0)))));
        if (((a) >= (0.0))) {
            return ((0.5) * (v3));
        } else {
            return ((1.0) - (((0.5) * (v3))));
        }
    }
}
