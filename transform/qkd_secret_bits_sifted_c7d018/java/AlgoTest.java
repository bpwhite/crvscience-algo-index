// SPDX-License-Identifier: GPL-3.0-only
public final class AlgoTest {
    public static void main(String[] args) {
        // Case 0: singleton_unit
        {
            double got = Algo.qkdSecretBitsSifted(2L, 0.5);
            if (Math.abs(got - 0.0) > 1.0e-7) throw new AssertionError("case 0 float mismatch: got=" + got);
        }
        // Case 1: ascending_ordered_5
        {
            double got = Algo.qkdSecretBitsSifted(5L, 0.85);
            if (Math.abs(got - 0.0) > 1.0e-7) throw new AssertionError("case 1 float mismatch: got=" + got);
        }
        // Case 2: descending_ordered_6
        {
            double got = Algo.qkdSecretBitsSifted(9L, 1.2);
            if (Math.abs(got - 0.0) > 1.0e-7) throw new AssertionError("case 2 float mismatch: got=" + got);
        }
        // Case 3: mixed_duplicates_7
        {
            double got = Algo.qkdSecretBitsSifted(4L, 0.15);
            if (Math.abs(got - 0.304830640351) > 1.0e-7) throw new AssertionError("case 3 float mismatch: got=" + got);
        }
        // Case 4: uniform_distribution_4
        {
            double got = Algo.qkdSecretBitsSifted(7L, 0.65);
            if (Math.abs(got - 0.0) > 1.0e-7) throw new AssertionError("case 4 float mismatch: got=" + got);
        }
        // Case 5: pseudo_random_prime_11
        {
            double got = Algo.qkdSecretBitsSifted(12L, 0.35);
            if (Math.abs(got - 0.0) > 1.0e-7) throw new AssertionError("case 5 float mismatch: got=" + got);
        }
        System.out.println("[java] PASS (6 vectors)");
    }
}
