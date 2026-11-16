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
            double[] xs = new double[]{};
            double got = Algo.inferKernel(xs);
            if (Math.abs(got - 0.0) > 1.0e-7) throw new AssertionError("case 0 float mismatch: got=" + got);
        }
        // Case 1: singleton_unit
        {
            double[] xs = new double[]{1.0};
            double got = Algo.inferKernel(xs);
            if (Math.abs(got - 2.0) > 1.0e-7) throw new AssertionError("case 1 float mismatch: got=" + got);
        }
        // Case 2: ascending_ordered_5
        {
            double[] xs = new double[]{0.5, 1.0, 1.5, 2.0, 2.5};
            double got = Algo.inferKernel(xs);
            if (Math.abs(got - 7.5) > 1.0e-7) throw new AssertionError("case 2 float mismatch: got=" + got);
        }
        // Case 3: descending_ordered_6
        {
            double[] xs = new double[]{5.0, 4.25, 3.5, 2.75, 2.0, 1.25};
            double got = Algo.inferKernel(xs);
            if (Math.abs(got - 29.375) > 1.0e-7) throw new AssertionError("case 3 float mismatch: got=" + got);
        }
        // Case 4: mixed_duplicates_7
        {
            double[] xs = new double[]{0.75, 2.0, 1.0, 2.25, 1.25, 0.25, 1.5};
            double got = Algo.inferKernel(xs);
            if (Math.abs(got - 10.5) > 1.0e-7) throw new AssertionError("case 4 float mismatch: got=" + got);
        }
        // Case 5: uniform_distribution_4
        {
            double[] xs = new double[]{0.25, 0.25, 0.25, 0.25};
            double got = Algo.inferKernel(xs);
            if (Math.abs(got - 0.125) > 1.0e-7) throw new AssertionError("case 5 float mismatch: got=" + got);
        }
        // Case 6: pseudo_random_prime_11
        {
            double[] xs = new double[]{3.6, 2.4, 1.2, 3.8, 2.6, 1.4, 0.2, 2.8, 1.6, 0.4, 3.0};
            double got = Algo.inferKernel(xs);
            if (Math.abs(got - 52.32) > 1.0e-7) throw new AssertionError("case 6 float mismatch: got=" + got);
        }
        System.out.println("[java] PASS (7 vectors)");
    }
}
