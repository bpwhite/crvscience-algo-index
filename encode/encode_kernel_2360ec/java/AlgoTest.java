// SPDX-License-Identifier: GPL-3.0-only
public final class AlgoTest {
    public static void main(String[] args) {
        // Case 0: singleton_unit
        {
            long[] buf = new long[]{5L};
            Algo.encodeKernel(buf, 5L);
            if (buf[0] != 37L) throw new AssertionError("case 0 mut[0] mismatch");
        }
        // Case 1: ascending_ordered_5
        {
            long[] buf = new long[]{1L, 3L, 5L, 7L, 9L};
            Algo.encodeKernel(buf, 9L);
            if (buf[0] != 1L) throw new AssertionError("case 1 mut[0] mismatch");
            if (buf[1] != 1L) throw new AssertionError("case 1 mut[1] mismatch");
            if (buf[2] != 5L) throw new AssertionError("case 1 mut[2] mismatch");
            if (buf[3] != 7L) throw new AssertionError("case 1 mut[3] mismatch");
            if (buf[4] != 9L) throw new AssertionError("case 1 mut[4] mismatch");
        }
        // Case 2: descending_ordered_6
        {
            long[] buf = new long[]{17L, 14L, 11L, 8L, 5L, 2L};
            Algo.encodeKernel(buf, 4L);
            if (buf[0] != 1L) throw new AssertionError("case 2 mut[0] mismatch");
            if (buf[1] != 14L) throw new AssertionError("case 2 mut[1] mismatch");
            if (buf[2] != 11L) throw new AssertionError("case 2 mut[2] mismatch");
            if (buf[3] != 8L) throw new AssertionError("case 2 mut[3] mismatch");
            if (buf[4] != 5L) throw new AssertionError("case 2 mut[4] mismatch");
            if (buf[5] != 2L) throw new AssertionError("case 2 mut[5] mismatch");
        }
        // Case 3: mixed_duplicates_7
        {
            long[] buf = new long[]{4L, 1L, 4L, 9L, 2L, 9L, 5L};
            Algo.encodeKernel(buf, 7L);
            if (buf[0] != 132L) throw new AssertionError("case 3 mut[0] mismatch");
            if (buf[1] != 1L) throw new AssertionError("case 3 mut[1] mismatch");
            if (buf[2] != 4L) throw new AssertionError("case 3 mut[2] mismatch");
            if (buf[3] != 9L) throw new AssertionError("case 3 mut[3] mismatch");
            if (buf[4] != 2L) throw new AssertionError("case 3 mut[4] mismatch");
            if (buf[5] != 9L) throw new AssertionError("case 3 mut[5] mismatch");
            if (buf[6] != 5L) throw new AssertionError("case 3 mut[6] mismatch");
        }
        // Case 4: uniform_distribution_4
        {
            long[] buf = new long[]{3L, 3L, 3L, 3L};
            Algo.encodeKernel(buf, 12L);
            if (buf[0] != 3L) throw new AssertionError("case 4 mut[0] mismatch");
            if (buf[1] != 19L) throw new AssertionError("case 4 mut[1] mismatch");
            if (buf[2] != 3L) throw new AssertionError("case 4 mut[2] mismatch");
            if (buf[3] != 3L) throw new AssertionError("case 4 mut[3] mismatch");
        }
        // Case 5: pseudo_random_prime_11
        {
            long[] buf = new long[]{24L, 12L, 29L, 17L, 5L, 22L, 10L, 27L, 15L, 3L, 20L};
            Algo.encodeKernel(buf, 3L);
            if (buf[0] != 16L) throw new AssertionError("case 5 mut[0] mismatch");
            if (buf[1] != 12L) throw new AssertionError("case 5 mut[1] mismatch");
            if (buf[2] != 29L) throw new AssertionError("case 5 mut[2] mismatch");
            if (buf[3] != 17L) throw new AssertionError("case 5 mut[3] mismatch");
            if (buf[4] != 5L) throw new AssertionError("case 5 mut[4] mismatch");
            if (buf[5] != 22L) throw new AssertionError("case 5 mut[5] mismatch");
            if (buf[6] != 10L) throw new AssertionError("case 5 mut[6] mismatch");
            if (buf[7] != 27L) throw new AssertionError("case 5 mut[7] mismatch");
            if (buf[8] != 15L) throw new AssertionError("case 5 mut[8] mismatch");
            if (buf[9] != 3L) throw new AssertionError("case 5 mut[9] mismatch");
            if (buf[10] != 20L) throw new AssertionError("case 5 mut[10] mismatch");
        }
        System.out.println("[java] PASS (6 vectors)");
    }
}
