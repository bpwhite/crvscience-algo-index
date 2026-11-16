// SPDX-License-Identifier: GPL-3.0-only
public final class Algo {
    private Algo() {}

    public static double transformKernel(double a) {
        double v0 = 0.0;
        if (((a) < (0.0))) {
            v0 = (-(1.0));
        } else {
            v0 = 1.0;
        }
        double v1 = Math.abs(a);
        double v2 = ((1.0) / (((1.0) + (((0.3275911) * (v1))))));
        double v3 = ((v2) * (((0.254829592) + (((v2) * ((((-(0.284496736))) + (((v2) * (((1.421413741) + (((v2) * ((((-(1.453152027))) + (((v2) * (1.061405429))))))))))))))))));
        return ((v0) * (((1.0) - (((v3) * (Math.exp((((-(v1))) * (v1)))))))));
    }
}
