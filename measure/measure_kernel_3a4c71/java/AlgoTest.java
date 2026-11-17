// SPDX-License-Identifier: GPL-3.0-only
public final class AlgoTest {
    public static void main(String[] args) {
        // Case 0: empty_boundary
        {
            double[] xs = new double[]{};
            double[] ys = new double[]{};
            double got = Algo.measureKernel(xs, ys);
            if (Math.abs(got - 0.0) > 1.0e-7) throw new AssertionError("case 0 float mismatch: got=" + got);
        }
        // Case 1: singleton_unit
        {
            double[] xs = new double[]{1.0};
            double[] ys = new double[]{1.0};
            double got = Algo.measureKernel(xs, ys);
            if (Math.abs(got - 0.0) > 1.0e-7) throw new AssertionError("case 1 float mismatch: got=" + got);
        }
        // Case 2: ascending_ordered_5
        {
            double[] xs = new double[]{0.066667, 0.133333, 0.2, 0.266667, 0.333333};
            double[] ys = new double[]{0.085714, 0.142857, 0.2, 0.257143, 0.314286};
            double got = Algo.measureKernel(xs, ys);
            if (Math.abs(got - 0.999999999995) > 1.0e-7) throw new AssertionError("case 2 float mismatch: got=" + got);
        }
        // Case 3: descending_ordered_6
        {
            double[] xs = new double[]{0.266667, 0.226667, 0.186667, 0.146667, 0.106667, 0.066667};
            double[] ys = new double[]{0.266667, 0.226667, 0.186667, 0.146667, 0.106667, 0.066667};
            double got = Algo.measureKernel(xs, ys);
            if (Math.abs(got - 1.0) > 1.0e-7) throw new AssertionError("case 3 float mismatch: got=" + got);
        }
        // Case 4: mixed_duplicates_7
        {
            double[] xs = new double[]{0.083333, 0.222222, 0.111111, 0.25, 0.138889, 0.027778, 0.166667};
            double[] ys = new double[]{0.153846, 0.051282, 0.179487, 0.076923, 0.205128, 0.102564, 0.230769};
            double got = Algo.measureKernel(xs, ys);
            if (Math.abs(got - -0.306968360001) > 1.0e-7) throw new AssertionError("case 4 float mismatch: got=" + got);
        }
        // Case 5: uniform_distribution_4
        {
            double[] xs = new double[]{0.25, 0.25, 0.25, 0.25};
            double[] ys = new double[]{0.25, 0.25, 0.25, 0.25};
            double got = Algo.measureKernel(xs, ys);
            if (Math.abs(got - 0.0) > 1.0e-7) throw new AssertionError("case 5 float mismatch: got=" + got);
        }
        // Case 6: pseudo_random_prime_11
        {
            double[] xs = new double[]{0.156522, 0.104348, 0.052174, 0.165217, 0.113043, 0.06087, 0.008696, 0.121739, 0.069565, 0.017391, 0.130435};
            double[] ys = new double[]{0.125, 0.075, 0.025, 0.133333, 0.083333, 0.033333, 0.141667, 0.091667, 0.041667, 0.15, 0.1};
            double got = Algo.measureKernel(xs, ys);
            if (Math.abs(got - 0.094368743893) > 1.0e-7) throw new AssertionError("case 6 float mismatch: got=" + got);
        }
        System.out.println("[java] PASS (7 vectors)");
    }
}
