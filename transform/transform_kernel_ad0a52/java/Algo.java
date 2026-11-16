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

    public static double transformKernel(long k, long m, long q) {
        if (((k) < (20L))) {
            return 0.5;
        }
        double v0 = ((((double)(m))) / (((double)(k))));
        double v1 = ((((double)(q))) / (((double)(k))));
        double v2 = Math.max(((((1.0) - (((2.0) * (v0))))) - (v1)), 0.01);
        double v3 = Math.max(((1.0) - (((2.0) * (v1)))), 0.01);
        return Math.min(Math.max((((((-(0.5))) * (Math.log(v2)))) - (((0.25) * (Math.log(v3))))), 0.0), 1.5);
    }
}
