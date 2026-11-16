// SPDX-License-Identifier: GPL-3.0-only
public final class Algo {
    private Algo() {}

    public static double transformKernel(double a) {
        if (((a) <= (0.0))) {
            return 1.0;
        }
        double v0 = Math.sqrt(((0.5) * (a)));
        double v1 = ((1.0) / (((1.0) + (((0.3275911) * (v0))))));
        double v2 = ((v1) * (((0.254829592) + (((v1) * ((((-(0.284496736))) + (((v1) * (((1.421413741) + (((v1) * ((((-(1.453152027))) + (((v1) * (1.061405429))))))))))))))))));
        return Math.min(Math.max(((v2) * (Math.exp((((-(v0))) * (v0))))), 0.0), 1.0);
    }
}
