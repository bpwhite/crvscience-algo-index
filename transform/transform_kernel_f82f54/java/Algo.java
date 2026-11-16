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

    public static double transformKernel(double a, double b, double c) {
        double v0 = ((((((999.842594) + (((0.06793952) * (a))))) - (((0.00909529) * (Math.pow(a, ((double)(2L)))))))) + (((0.0001001685) * (Math.pow(a, ((double)(3L)))))));
        double v1 = ((((0.824493) - (((0.0040899) * (a))))) * (b));
        double v2 = ((0.0045) * (c));
        return ((((v0) + (v1))) + (v2));
    }
}
