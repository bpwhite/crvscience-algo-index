// SPDX-License-Identifier: GPL-3.0-only
public final class AlgoTest {
    public static void main(String[] args) {
        // Case 0: empty_boundary
        {
            double[] xs = new double[]{};
            double got = Algo.raggednessFreqs(xs);
            if (Math.abs(got - 0.0) > 1.0e-7) throw new AssertionError("case 0 float mismatch: got=" + got);
        }
        // Case 1: singleton_unit
        {
            double[] xs = new double[]{1.0};
            double got = Algo.raggednessFreqs(xs);
            if (Math.abs(got - 2.0) > 1.0e-7) throw new AssertionError("case 1 float mismatch: got=" + got);
        }
        // Case 2: ascending_ordered_5
        {
            double[] xs = new double[]{0.5, 1.0, 1.5, 2.0, 2.5};
            double got = Algo.raggednessFreqs(xs);
            if (Math.abs(got - 7.5) > 1.0e-7) throw new AssertionError("case 2 float mismatch: got=" + got);
        }
        // Case 3: descending_ordered_6
        {
            double[] xs = new double[]{5.0, 4.25, 3.5, 2.75, 2.0, 1.25};
            double got = Algo.raggednessFreqs(xs);
            if (Math.abs(got - 29.375) > 1.0e-7) throw new AssertionError("case 3 float mismatch: got=" + got);
        }
        // Case 4: mixed_duplicates_7
        {
            double[] xs = new double[]{0.75, 2.0, 1.0, 2.25, 1.25, 0.25, 1.5};
            double got = Algo.raggednessFreqs(xs);
            if (Math.abs(got - 10.5) > 1.0e-7) throw new AssertionError("case 4 float mismatch: got=" + got);
        }
        // Case 5: uniform_distribution_4
        {
            double[] xs = new double[]{0.25, 0.25, 0.25, 0.25};
            double got = Algo.raggednessFreqs(xs);
            if (Math.abs(got - 0.125) > 1.0e-7) throw new AssertionError("case 5 float mismatch: got=" + got);
        }
        // Case 6: pseudo_random_prime_11
        {
            double[] xs = new double[]{3.6, 2.4, 1.2, 3.8, 2.6, 1.4, 0.2, 2.8, 1.6, 0.4, 3.0};
            double got = Algo.raggednessFreqs(xs);
            if (Math.abs(got - 52.32) > 1.0e-7) throw new AssertionError("case 6 float mismatch: got=" + got);
        }
        System.out.println("[java] PASS (7 vectors)");
    }
}
