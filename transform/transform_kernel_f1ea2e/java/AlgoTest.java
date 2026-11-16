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

public final class AlgoTest {
    public static void main(String[] args) {
        // Case 0: singleton_unit
        {
            long got = Algo.transformKernel(2L);
            if (got != 3L) throw new AssertionError("case 0 failed: got=" + got);
        }
        // Case 1: ascending_ordered_5
        {
            long got = Algo.transformKernel(5L);
            if (got != 3L) throw new AssertionError("case 1 failed: got=" + got);
        }
        // Case 2: descending_ordered_6
        {
            long got = Algo.transformKernel(9L);
            if (got != 3L) throw new AssertionError("case 2 failed: got=" + got);
        }
        // Case 3: mixed_duplicates_7
        {
            long got = Algo.transformKernel(4L);
            if (got != 3L) throw new AssertionError("case 3 failed: got=" + got);
        }
        // Case 4: uniform_distribution_4
        {
            long got = Algo.transformKernel(7L);
            if (got != 3L) throw new AssertionError("case 4 failed: got=" + got);
        }
        // Case 5: pseudo_random_prime_11
        {
            long got = Algo.transformKernel(12L);
            if (got != 3L) throw new AssertionError("case 5 failed: got=" + got);
        }
        System.out.println("[java] PASS (6 vectors)");
    }
}
