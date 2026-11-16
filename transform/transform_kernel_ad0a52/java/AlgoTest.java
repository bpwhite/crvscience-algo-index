// SPDX-License-Identifier: GPL-3.0-only
public final class AlgoTest {
    public static void main(String[] args) {
        // Case 0: singleton_unit
        {
            double got = Algo.transformKernel(2L, 5L, 9L);
            if (Math.abs(got - 0.5) > 1.0e-7) throw new AssertionError("case 0 float mismatch: got=" + got);
        }
        // Case 1: ascending_ordered_5
        {
            double got = Algo.transformKernel(5L, 9L, 4L);
            if (Math.abs(got - 0.5) > 1.0e-7) throw new AssertionError("case 1 float mismatch: got=" + got);
        }
        // Case 2: descending_ordered_6
        {
            double got = Algo.transformKernel(9L, 4L, 7L);
            if (Math.abs(got - 0.5) > 1.0e-7) throw new AssertionError("case 2 float mismatch: got=" + got);
        }
        // Case 3: mixed_duplicates_7
        {
            double got = Algo.transformKernel(4L, 7L, 12L);
            if (Math.abs(got - 0.5) > 1.0e-7) throw new AssertionError("case 3 float mismatch: got=" + got);
        }
        // Case 4: uniform_distribution_4
        {
            double got = Algo.transformKernel(7L, 12L, 3L);
            if (Math.abs(got - 0.5) > 1.0e-7) throw new AssertionError("case 4 float mismatch: got=" + got);
        }
        // Case 5: pseudo_random_prime_11
        {
            double got = Algo.transformKernel(12L, 3L, 2L);
            if (Math.abs(got - 0.5) > 1.0e-7) throw new AssertionError("case 5 float mismatch: got=" + got);
        }
        System.out.println("[java] PASS (6 vectors)");
    }
}
