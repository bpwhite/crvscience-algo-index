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

    public static boolean encodeKernel(long k, long m, long q) {
        if (((q) < (32L))) {
            return ((((long)(((int)(k)) & ((int)(((long)(((int)(1L)) << (((int)(q)) & 31)))))))) != (0L));
        } else {
            return ((((long)(((int)(m)) & ((int)(((long)(((int)(1L)) << (((int)(((q) - (32L)))) & 31)))))))) != (0L));
        }
    }
}
