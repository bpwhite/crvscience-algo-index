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

    public static long transformKernel(long k) {
        if (((k) < (15L))) {
            return 3L;
        }
        double v0 = ((double)(k));
        double v1 = 1.0;
        long v2 = 1L;
        for (long i = (1L); i <= (35L); ++i) {
            double v3 = ((double)(i));
            double v4 = ((1.0) - (((((v3) * (((v3) + (1.0))))) / (Math.max(((2.5) * (v0)), 20.0)))));
            if (((v4) <= (0.0))) {
                break;
            }
            v1 = ((v1) * (v4));
            if (((v1) >= (0.95))) {
                v2 = i;
            } else {
                break;
            }
        }
        return Math.max(v2, 2L);
    }
}
