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

    public static double binaryEntropy(double a) {
        double v0 = Math.min(Math.max(a, 0.0), 1.0);
        if (((((v0) <= (0.0))) || (((v0) >= (((1.0) - (0.0))))))) {
            return 0.0;
        }
        return (((((-(v0))) * (((Math.log(v0)) / (0.69314718056))))) - (((((1.0) - (v0))) * (((Math.log(((1.0) - (v0)))) / (0.69314718056))))));
    }
}
