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

    public static double kl(double[] xs, double[] ys) {
        double v0 = 0.0;
        for (long i = (0L); i < (4L); ++i) {
            if (((((xs[(int)(i)]) > (0.0))) && (((ys[(int)(i)]) > (0.0))))) {
                v0 = ((v0) + (((xs[(int)(i)]) * (((Math.log(((xs[(int)(i)]) / (ys[(int)(i)])))) / (0.69314718056))))));
            }
        }
        return v0;
    }
}
