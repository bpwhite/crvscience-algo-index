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

    public static double transformKernel(long k, long m, long q, long p) {
        long v0 = Math.max(k, q);
        long v1 = Math.min(m, p);
        if (((v1) < (v0))) {
            return 0.0;
        }
        double v2 = ((double)(((((v1) - (v0))) + (1L))));
        double v3 = ((((double)(((((((m) - (k))) + (1L))) + (((((p) - (q))) + (1L))))))) - (v2));
        if (((v3) <= (0.0))) {
            return 1.0;
        } else {
            return ((v2) / (v3));
        }
    }
}
