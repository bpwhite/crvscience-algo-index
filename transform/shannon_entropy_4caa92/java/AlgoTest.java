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
        // Case 0: empty_boundary
        {
            long[] xs = new long[]{};
            double got = Algo.shannonEntropy(xs);
            if (Math.abs(got - 0.0) > 1.0e-7) throw new AssertionError("case 0 float mismatch: got=" + got);
        }
        // Case 1: singleton_unit
        {
            long[] xs = new long[]{5L};
            double got = Algo.shannonEntropy(xs);
            if (Math.abs(got - 0.0) > 1.0e-7) throw new AssertionError("case 1 float mismatch: got=" + got);
        }
        // Case 2: ascending_ordered_5
        {
            long[] xs = new long[]{1L, 3L, 5L, 7L, 9L};
            double got = Algo.shannonEntropy(xs);
            if (Math.abs(got - 2.062042692015) > 1.0e-7) throw new AssertionError("case 2 float mismatch: got=" + got);
        }
        // Case 3: descending_ordered_6
        {
            long[] xs = new long[]{17L, 14L, 11L, 8L, 5L, 2L};
            double got = Algo.shannonEntropy(xs);
            if (Math.abs(got - 2.351254479261) > 1.0e-7) throw new AssertionError("case 3 float mismatch: got=" + got);
        }
        // Case 4: mixed_duplicates_7
        {
            long[] xs = new long[]{4L, 1L, 4L, 9L, 2L, 9L, 5L};
            double got = Algo.shannonEntropy(xs);
            if (Math.abs(got - 2.538395473592) > 1.0e-7) throw new AssertionError("case 4 float mismatch: got=" + got);
        }
        // Case 5: uniform_distribution_4
        {
            long[] xs = new long[]{3L, 3L, 3L, 3L};
            double got = Algo.shannonEntropy(xs);
            if (Math.abs(got - 2.0) > 1.0e-7) throw new AssertionError("case 5 float mismatch: got=" + got);
        }
        // Case 6: pseudo_random_prime_11
        {
            long[] xs = new long[]{24L, 12L, 29L, 17L, 5L, 22L, 10L, 27L, 15L, 3L, 20L};
            double got = Algo.shannonEntropy(xs);
            if (Math.abs(got - 3.259745895667) > 1.0e-7) throw new AssertionError("case 6 float mismatch: got=" + got);
        }
        System.out.println("[java] PASS (7 vectors)");
    }
}
