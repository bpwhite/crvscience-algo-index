// SPDX-License-Identifier: GPL-3.0-only
public final class AlgoTest {
    public static void main(String[] args) {
        // Case 0: empty_boundary
        {
            double[] xs = new double[]{};
            long got = Algo.transformKernel(xs, 0.85);
            if (got != 0L) throw new AssertionError("case 0 failed: got=" + got);
        }
        // Case 1: singleton_unit
        {
            double[] xs = new double[]{1.0};
            long got = Algo.transformKernel(xs, 0.5);
            if (got != 0L) throw new AssertionError("case 1 failed: got=" + got);
        }
        // Case 2: ascending_ordered_5
        {
            double[] xs = new double[]{0.5, 1.0, 1.5, 2.0, 2.5};
            long got = Algo.transformKernel(xs, 0.85);
            if (got != 1L) throw new AssertionError("case 2 failed: got=" + got);
        }
        // Case 3: descending_ordered_6
        {
            double[] xs = new double[]{5.0, 4.25, 3.5, 2.75, 2.0, 1.25};
            long got = Algo.transformKernel(xs, 1.2);
            if (got != 5L) throw new AssertionError("case 3 failed: got=" + got);
        }
        // Case 4: mixed_duplicates_7
        {
            double[] xs = new double[]{0.75, 2.0, 1.0, 2.25, 1.25, 0.25, 1.5};
            long got = Algo.transformKernel(xs, 0.15);
            if (got != 5L) throw new AssertionError("case 4 failed: got=" + got);
        }
        // Case 5: uniform_distribution_4
        {
            double[] xs = new double[]{0.25, 0.25, 0.25, 0.25};
            long got = Algo.transformKernel(xs, 0.65);
            if (got != 0L) throw new AssertionError("case 5 failed: got=" + got);
        }
        // Case 6: pseudo_random_prime_11
        {
            double[] xs = new double[]{3.6, 2.4, 1.2, 3.8, 2.6, 1.4, 0.2, 2.8, 1.6, 0.4, 3.0};
            long got = Algo.transformKernel(xs, 0.35);
            if (got != 9L) throw new AssertionError("case 6 failed: got=" + got);
        }
        System.out.println("[java] PASS (7 vectors)");
    }
}
