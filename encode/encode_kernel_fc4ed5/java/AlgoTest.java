// SPDX-License-Identifier: GPL-3.0-only
public final class AlgoTest {
    public static void main(String[] args) {
        // Case 0: singleton_unit
        {
            boolean got = Algo.encodeKernel(2L, 5L, 9L);
            if (got != false) throw new AssertionError("case 0 bool mismatch");
        }
        // Case 1: ascending_ordered_5
        {
            boolean got = Algo.encodeKernel(5L, 9L, 4L);
            if (got != false) throw new AssertionError("case 1 bool mismatch");
        }
        // Case 2: descending_ordered_6
        {
            boolean got = Algo.encodeKernel(9L, 4L, 7L);
            if (got != false) throw new AssertionError("case 2 bool mismatch");
        }
        // Case 3: mixed_duplicates_7
        {
            boolean got = Algo.encodeKernel(4L, 7L, 12L);
            if (got != false) throw new AssertionError("case 3 bool mismatch");
        }
        // Case 4: uniform_distribution_4
        {
            boolean got = Algo.encodeKernel(7L, 12L, 3L);
            if (got != false) throw new AssertionError("case 4 bool mismatch");
        }
        // Case 5: pseudo_random_prime_11
        {
            boolean got = Algo.encodeKernel(12L, 3L, 2L);
            if (got != true) throw new AssertionError("case 5 bool mismatch");
        }
        System.out.println("[java] PASS (6 vectors)");
    }
}
