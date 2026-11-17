// SPDX-License-Identifier: GPL-3.0-only
public final class AlgoTest {
    public static void main(String[] args) {
        // Case 0: empty_boundary
        {
            long[] xs = new long[]{};
            long got = Algo.lz76Complexity(xs);
            if (got != 0L) throw new AssertionError("case 0 failed: got=" + got);
        }
        // Case 1: singleton_unit
        {
            long[] xs = new long[]{5L};
            long got = Algo.lz76Complexity(xs);
            if (got != 1L) throw new AssertionError("case 1 failed: got=" + got);
        }
        // Case 2: ascending_ordered_5
        {
            long[] xs = new long[]{1L, 3L, 5L, 7L, 9L};
            long got = Algo.lz76Complexity(xs);
            if (got != 5L) throw new AssertionError("case 2 failed: got=" + got);
        }
        // Case 3: descending_ordered_6
        {
            long[] xs = new long[]{17L, 14L, 11L, 8L, 5L, 2L};
            long got = Algo.lz76Complexity(xs);
            if (got != 6L) throw new AssertionError("case 3 failed: got=" + got);
        }
        // Case 4: mixed_duplicates_7
        {
            long[] xs = new long[]{4L, 1L, 4L, 9L, 2L, 9L, 5L};
            long got = Algo.lz76Complexity(xs);
            if (got != 5L) throw new AssertionError("case 4 failed: got=" + got);
        }
        // Case 5: uniform_distribution_4
        {
            long[] xs = new long[]{3L, 3L, 3L, 3L};
            long got = Algo.lz76Complexity(xs);
            if (got != 2L) throw new AssertionError("case 5 failed: got=" + got);
        }
        // Case 6: pseudo_random_prime_11
        {
            long[] xs = new long[]{24L, 12L, 29L, 17L, 5L, 22L, 10L, 27L, 15L, 3L, 20L};
            long got = Algo.lz76Complexity(xs);
            if (got != 11L) throw new AssertionError("case 6 failed: got=" + got);
        }
        System.out.println("[java] PASS (7 vectors)");
    }
}
