// SPDX-License-Identifier: GPL-3.0-or-later
// Copyright (C) 2026 CRV Science Network (https://crvscience.com)
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://gnu.org>.

public final class Algo {
    private Algo() {}

    public static double projectKernel(long k, double a, long m) {
        if (((((k) <= (1L))) || (((m) == (0L))))) {
            return 1.0;
        }
        double v0 = Math.min(Math.max(a, 0.005), 0.985);
        double v1 = ((double)(k));
        double v2 = ((v1) * (v0));
        double v3 = 1.0;
        double v4 = 1.0;
        for (long i = (1L); i < (k); ++i) {
            v4 = ((v4) * (((v2) / (((double)(i))))));
            v3 = ((v3) + (v4));
        }
        double v5 = ((v4) * (((v2) / (v1))));
        double v6 = ((v5) / (Math.max(((1.0) - (v0)), 0.000000001)));
        double v7 = ((1.0) / (((v3) + (v6))));
        double v8 = v7;
        double v9 = 0.0;
        for (long j = (0L); j < (k); ++j) {
            if (((j) > (0L))) {
                v8 = ((v8) * (((v2) / (((double)(j))))));
            }
            if (((j) >= (m))) {
                double v10 = ((((double)(((k) - (j))))) / (v1));
                for (long t = (0L); t < (m); ++t) {
                    v10 = ((v10) * (((((double)(((j) - (t))))) / (((double)(Math.max(((((k) - (1L))) - (t)), 1L)))))));
                }
                v9 = ((v9) + (((v8) * (v10))));
            }
        }
        double v11 = ((Math.pow(v0, ((double)(m)))) * (((1.0) - (v0))));
        return Math.min(Math.max(((v9) / (Math.max(v11, 0.000000000001))), 0.05), 8.0);
    }
}
