// SPDX-License-Identifier: GPL-3.0-only
public final class AlgoTest {
    public static void main(String[] args) {
        // Case 0: singleton_unit
        {
            double got = Algo.bits(0.25, 0.5, 0.85, 4L);
            if (Math.abs(got - 2.0) > 1.0e-7) throw new AssertionError("case 0 float mismatch: got=" + got);
        }
        // Case 1: ascending_ordered_5
        {
            double got = Algo.bits(0.5, 0.85, 1.2, 7L);
            if (Math.abs(got - 2.0) > 1.0e-7) throw new AssertionError("case 1 float mismatch: got=" + got);
        }
        // Case 2: descending_ordered_6
        {
            double got = Algo.bits(0.85, 1.2, 0.15, 12L);
            if (Math.abs(got - 2.0) > 1.0e-7) throw new AssertionError("case 2 float mismatch: got=" + got);
        }
        // Case 3: mixed_duplicates_7
        {
            double got = Algo.bits(1.2, 0.15, 0.65, 3L);
            if (Math.abs(got - 2.0) > 1.0e-7) throw new AssertionError("case 3 float mismatch: got=" + got);
        }
        // Case 4: uniform_distribution_4
        {
            double got = Algo.bits(0.15, 0.65, 0.35, 2L);
            if (Math.abs(got - 2.0) > 1.0e-7) throw new AssertionError("case 4 float mismatch: got=" + got);
        }
        // Case 5: pseudo_random_prime_11
        {
            double got = Algo.bits(0.65, 0.35, 0.25, 5L);
            if (Math.abs(got - 2.0) > 1.0e-7) throw new AssertionError("case 5 float mismatch: got=" + got);
        }
        System.out.println("[java] PASS (6 vectors)");
    }
}
