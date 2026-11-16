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

    public static double transformKernel(long k, double a) {
        double v0 = ((double)(Math.max(k, 2L)));
        double v1 = ((((v0) - (1.0))) / (v0));
        double v2 = Math.min(Math.max(a, 0.0), v1);
        if (((v2) <= (0.0))) {
            return ((Math.log(v0)) / (0.69314718056));
        }
        if (((v2) >= (((v1) - (0.000000000001))))) {
            return 0.0;
        }
        double v3 = (((((-(v2))) * (((Math.log(((v2) / (((v0) - (1.0)))))) / (0.69314718056))))) - (((((1.0) - (v2))) * (((Math.log(((1.0) - (v2)))) / (0.69314718056))))));
        return Math.max(((((Math.log(v0)) / (0.69314718056))) - (((2.0) * (v3)))), 0.0);
    }
}
