// SPDX-License-Identifier: GPL-3.0-only
public final class Algo {
    private Algo() {}

    public static long transformKernel(double[] xs, double a) {
        long v0 = 0L;
        double v1 = 1000000000000000052504760255204420248704468581108159154915854115511802457988908195786371375080447864043704443832883878176942523235360430575644792184786706982848387200926575803737830233794788090059368953234970799945081119038967640880074652742780142494579258788820056842838115669472196386865459400540160.0;
        for (long i = (0L); i < (((long)xs.length)); ++i) {
            double v2 = xs[(int)(i)];
            double v3 = Math.abs(((v2) - (a)));
            if (((v3) < (v1))) {
                v1 = v3;
                v0 = i;
            }
        }
        return v0;
    }
}
