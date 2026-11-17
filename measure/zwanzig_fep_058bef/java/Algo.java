// SPDX-License-Identifier: GPL-3.0-only
public final class Algo {
    private Algo() {}

    public static double zwanzigFep(double[] xs, double a) {
        if (((((long)xs.length)) == (0L))) {
            return 0.0;
        }
        double v0 = ((1.0) / (Math.max(a, 0.000001)));
        double v1 = -1000000000000000052504760255204420248704468581108159154915854115511802457988908195786371375080447864043704443832883878176942523235360430575644792184786706982848387200926575803737830233794788090059368953234970799945081119038967640880074652742780142494579258788820056842838115669472196386865459400540160.0;
        for (long i = (0L); i < (((long)xs.length)); ++i) {
            double v2 = xs[(int)(i)];
            double v3 = (((-(v2))) * (v0));
            if (((v3) > (v1))) {
                v1 = v3;
            }
        }
        double v4 = 0.0;
        for (long j = (0L); j < (((long)xs.length)); ++j) {
            double v5 = xs[(int)(j)];
            v4 = ((v4) + (Math.exp((((((-(v5))) * (v0))) - (v1)))));
        }
        double v6 = ((v1) + (Math.log(((v4) / (((double)(((long)xs.length))))))));
        return (((-(a))) * (v6));
    }
}
