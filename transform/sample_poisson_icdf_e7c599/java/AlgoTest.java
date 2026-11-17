// SPDX-License-Identifier: GPL-3.0-only
public final class AlgoTest {
    public static void main(String[] args) {
        // Case 0: singleton_unit
        {
            long got = Algo.samplePoissonIcdf(0.25, 0.5);
            if (got != 0L) throw new AssertionError("case 0 failed: got=" + got);
        }
        // Case 1: ascending_ordered_5
        {
            long got = Algo.samplePoissonIcdf(0.5, 0.85);
            if (got != 1L) throw new AssertionError("case 1 failed: got=" + got);
        }
        // Case 2: descending_ordered_6
        {
            long got = Algo.samplePoissonIcdf(0.85, 1.2);
            if (got != 96L) throw new AssertionError("case 2 failed: got=" + got);
        }
        // Case 3: mixed_duplicates_7
        {
            long got = Algo.samplePoissonIcdf(1.2, 0.15);
            if (got != 0L) throw new AssertionError("case 3 failed: got=" + got);
        }
        // Case 4: uniform_distribution_4
        {
            long got = Algo.samplePoissonIcdf(0.15, 0.65);
            if (got != 0L) throw new AssertionError("case 4 failed: got=" + got);
        }
        // Case 5: pseudo_random_prime_11
        {
            long got = Algo.samplePoissonIcdf(0.65, 0.35);
            if (got != 0L) throw new AssertionError("case 5 failed: got=" + got);
        }
        System.out.println("[java] PASS (6 vectors)");
    }
}
