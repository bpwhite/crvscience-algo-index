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

    public static long sample(double a, double b) {
        if (((a) <= (0.000000000001))) {
            return 0L;
        }
        double v0 = Math.min(a, 25.0);
        double v1 = Math.exp((-(v0)));
        double v2 = v1;
        if (((b) <= (v2))) {
            return 0L;
        }
        for (long i = (1L); i <= (48L); ++i) {
            v1 = ((v1) * (((v0) / (((double)(i))))));
            v2 = ((v2) + (v1));
            if (((b) <= (v2))) {
                return i;
            }
        }
        return 48L;
    }
}
