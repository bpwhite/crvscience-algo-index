// SPDX-License-Identifier: GPL-3.0-only
public final class AlgoTest {
    public static void main(String[] args) {
        // Case 0: singleton_unit
        {
            double got = Algo.transformKernel(2L, 0.5, 9L);
            if (Math.abs(got - 115.22741127776) > 1.0e-7) throw new AssertionError("case 0 float mismatch: got=" + got);
        }
        // Case 1: ascending_ordered_5
        {
            double got = Algo.transformKernel(5L, 0.85, 4L);
            if (Math.abs(got - 99.140215790341) > 1.0e-7) throw new AssertionError("case 1 float mismatch: got=" + got);
        }
        // Case 2: descending_ordered_6
        {
            double got = Algo.transformKernel(9L, 1.2, 7L);
            if (Math.abs(got - 107.86587281512) > 1.0e-7) throw new AssertionError("case 2 float mismatch: got=" + got);
        }
        // Case 3: mixed_duplicates_7
        {
            double got = Algo.transformKernel(4L, 0.15, 12L);
            if (Math.abs(got - 110.866342615977) > 1.0e-7) throw new AssertionError("case 3 float mismatch: got=" + got);
        }
        // Case 4: uniform_distribution_4
        {
            double got = Algo.transformKernel(7L, 0.65, 3L);
            if (Math.abs(got - -2.636851456034) > 1.0e-7) throw new AssertionError("case 4 float mismatch: got=" + got);
        }
        // Case 5: pseudo_random_prime_11
        {
            double got = Algo.transformKernel(12L, 0.35, 2L);
            if (Math.abs(got - -37.083411958107) > 1.0e-7) throw new AssertionError("case 5 float mismatch: got=" + got);
        }
        System.out.println("[java] PASS (6 vectors)");
    }
}
