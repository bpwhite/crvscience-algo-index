// SPDX-License-Identifier: GPL-3.0-only
public final class AlgoTest {
    public static void main(String[] args) {
        // Case 0: singleton_unit
        {
            long got = Algo.packRgbaU32(2L, 5L, 9L, 4L);
            if (got != 67699970L) throw new AssertionError("case 0 failed: got=" + got);
        }
        // Case 1: ascending_ordered_5
        {
            long got = Algo.packRgbaU32(5L, 9L, 4L, 7L);
            if (got != 117704965L) throw new AssertionError("case 1 failed: got=" + got);
        }
        // Case 2: descending_ordered_6
        {
            long got = Algo.packRgbaU32(9L, 4L, 7L, 12L);
            if (got != 201786377L) throw new AssertionError("case 2 failed: got=" + got);
        }
        // Case 3: mixed_duplicates_7
        {
            long got = Algo.packRgbaU32(4L, 7L, 12L, 3L);
            if (got != 51119876L) throw new AssertionError("case 3 failed: got=" + got);
        }
        // Case 4: uniform_distribution_4
        {
            long got = Algo.packRgbaU32(7L, 12L, 3L, 2L);
            if (got != 33754119L) throw new AssertionError("case 4 failed: got=" + got);
        }
        // Case 5: pseudo_random_prime_11
        {
            long got = Algo.packRgbaU32(12L, 3L, 2L, 5L);
            if (got != 84017932L) throw new AssertionError("case 5 failed: got=" + got);
        }
        System.out.println("[java] PASS (6 vectors)");
    }
}
