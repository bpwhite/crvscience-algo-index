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

    public static double shannonEntropy(long[] xs) {
        long v0 = 0L;
        for (long i = (0L); i < (((long)xs.length)); ++i) {
            v0 = ((v0) + (xs[(int)(i)]));
        }
        if (((v0) == (0L))) {
            return 0.0;
        }
        double v1 = ((double)(v0));
        double v2 = 0.0;
        for (long j = (0L); j < (((long)xs.length)); ++j) {
            long v3 = xs[(int)(j)];
            if (((v3) > (0L))) {
                double v4 = ((((double)(v3))) / (v1));
                v2 = ((v2) - (((v4) * (((Math.log(v4)) / (0.69314718056))))));
            }
        }
        return v2;
    }
}
