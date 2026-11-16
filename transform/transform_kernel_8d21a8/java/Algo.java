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

    public static double transformKernel(double a, double b, double c, double d) {
        double v0 = Math.max(a, 0.0);
        double v1 = Math.max(c, 0.000000001);
        double v2 = Math.max(d, 0.000000001);
        double v3 = ((((v1) + (v0))) + (v2));
        double v4 = Math.sqrt(Math.max(((((v3) * (v3))) - (((((4.0) * (v1))) * (v0)))), 0.0));
        double v5 = Math.min(Math.max(((((v3) - (v4))) / (((2.0) * (v1)))), 0.0), 1.0);
        return ((b) * (((1.0) - (v5))));
    }
}
