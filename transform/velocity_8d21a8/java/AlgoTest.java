// SPDX-License-Identifier: GPL-3.0-only
public final class AlgoTest {
    public static void main(String[] args) {
        // Case 0: singleton_unit
        {
            double got = Algo.velocity(0.25, 0.5, 0.85, 1.2);
            if (Math.abs(got - 0.443273750168) > 1.0e-7) throw new AssertionError("case 0 float mismatch: got=" + got);
        }
        // Case 1: ascending_ordered_5
        {
            double got = Algo.velocity(0.5, 0.85, 1.2, 0.15);
            if (Math.abs(got - 0.552920544869) > 1.0e-7) throw new AssertionError("case 1 float mismatch: got=" + got);
        }
        // Case 2: descending_ordered_6
        {
            double got = Algo.velocity(0.85, 1.2, 0.15, 0.65);
            if (Math.abs(got - 0.549789912257) > 1.0e-7) throw new AssertionError("case 2 float mismatch: got=" + got);
        }
        // Case 3: mixed_duplicates_7
        {
            double got = Algo.velocity(1.2, 0.15, 0.65, 0.35);
            if (Math.abs(got - 0.047479350561) > 1.0e-7) throw new AssertionError("case 3 float mismatch: got=" + got);
        }
        // Case 4: uniform_distribution_4
        {
            double got = Algo.velocity(0.15, 0.65, 0.35, 0.25);
            if (Math.abs(got - 0.504880168327) > 1.0e-7) throw new AssertionError("case 4 float mismatch: got=" + got);
        }
        // Case 5: pseudo_random_prime_11
        {
            double got = Algo.velocity(0.65, 0.35, 0.25, 0.5);
            if (Math.abs(got - 0.171186619958) > 1.0e-7) throw new AssertionError("case 5 float mismatch: got=" + got);
        }
        System.out.println("[java] PASS (6 vectors)");
    }
}
