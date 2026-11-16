// SPDX-License-Identifier: GPL-3.0-only
public final class AlgoTest {
    public static void main(String[] args) {
        // Case 0: singleton_unit
        {
            double got = Algo.projectKernel(2L, 0.5, 9L);
            if (Math.abs(got - 0.05) > 1.0e-7) throw new AssertionError("case 0 float mismatch: got=" + got);
        }
        // Case 1: ascending_ordered_5
        {
            double got = Algo.projectKernel(5L, 0.85, 4L);
            if (Math.abs(got - 0.295002111109) > 1.0e-7) throw new AssertionError("case 1 float mismatch: got=" + got);
        }
        // Case 2: descending_ordered_6
        {
            double got = Algo.projectKernel(9L, 1.2, 7L);
            if (Math.abs(got - 0.145811095701) > 1.0e-7) throw new AssertionError("case 2 float mismatch: got=" + got);
        }
        // Case 3: mixed_duplicates_7
        {
            double got = Algo.projectKernel(4L, 0.15, 12L);
            if (Math.abs(got - 0.05) > 1.0e-7) throw new AssertionError("case 3 float mismatch: got=" + got);
        }
        // Case 4: uniform_distribution_4
        {
            double got = Algo.projectKernel(7L, 0.65, 3L);
            if (Math.abs(got - 0.624858671293) > 1.0e-7) throw new AssertionError("case 4 float mismatch: got=" + got);
        }
        // Case 5: pseudo_random_prime_11
        {
            double got = Algo.projectKernel(12L, 0.35, 2L);
            if (Math.abs(got - 0.974365889415) > 1.0e-7) throw new AssertionError("case 5 float mismatch: got=" + got);
        }
        System.out.println("[java] PASS (6 vectors)");
    }
}
