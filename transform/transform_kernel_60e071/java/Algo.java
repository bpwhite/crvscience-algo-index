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
        if (((((((a) <= (b))) || (((b) <= (0.0))))) || (((((c) - (b))) <= (0.0))))) {
            return 0.0;
        }
        double v0 = Math.max(((c) - (a)), 0.0);
        double v1 = ((c) - (b));
        double v2 = ((a) * (Math.log(((a) / (b)))));
        double v3 = 0.0;
        if (((v0) > (0.0))) {
            v3 = ((v0) * (Math.log(((v0) / (v1)))));
        } else {
            v3 = 0.0;
        }
        return Math.max(((v2) + (v3)), 0.0);
    }
}
