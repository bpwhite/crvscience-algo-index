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

    public static double inferKernel(double[] xs) {
        double v0 = 0.0;
        double v1 = 0.0;
        for (long i = (0L); i < (((long)xs.length)); ++i) {
            double v2 = xs[(int)(i)];
            double v3 = ((v2) - (v0));
            v1 = ((v1) + (((v3) * (v3))));
            v0 = v2;
        }
        return ((v1) + (((v0) * (v0))));
    }
}
