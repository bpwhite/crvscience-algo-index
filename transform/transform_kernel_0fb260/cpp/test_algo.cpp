// SPDX-License-Identifier: GPL-3.0-only
#include "algo.hpp"
#include <cmath>
#include <cstdio>
#include <vector>

int main() {
    // Case 0: singleton_unit
    {
        double got = algo::transform_kernel(INT64_C(2), 0.5, INT64_C(9));
        if (fabs(got - 115.22741127776) > 1.0e-7) { fprintf(stderr, "case 0 float mismatch: got=%.12f\n", got); return 1; }
    }
    // Case 1: ascending_ordered_5
    {
        double got = algo::transform_kernel(INT64_C(5), 0.85, INT64_C(4));
        if (fabs(got - 99.140215790341) > 1.0e-7) { fprintf(stderr, "case 1 float mismatch: got=%.12f\n", got); return 1; }
    }
    // Case 2: descending_ordered_6
    {
        double got = algo::transform_kernel(INT64_C(9), 1.2, INT64_C(7));
        if (fabs(got - 107.86587281512) > 1.0e-7) { fprintf(stderr, "case 2 float mismatch: got=%.12f\n", got); return 1; }
    }
    // Case 3: mixed_duplicates_7
    {
        double got = algo::transform_kernel(INT64_C(4), 0.15, INT64_C(12));
        if (fabs(got - 110.866342615977) > 1.0e-7) { fprintf(stderr, "case 3 float mismatch: got=%.12f\n", got); return 1; }
    }
    // Case 4: uniform_distribution_4
    {
        double got = algo::transform_kernel(INT64_C(7), 0.65, INT64_C(3));
        if (fabs(got - -2.636851456034) > 1.0e-7) { fprintf(stderr, "case 4 float mismatch: got=%.12f\n", got); return 1; }
    }
    // Case 5: pseudo_random_prime_11
    {
        double got = algo::transform_kernel(INT64_C(12), 0.35, INT64_C(2));
        if (fabs(got - -37.083411958107) > 1.0e-7) { fprintf(stderr, "case 5 float mismatch: got=%.12f\n", got); return 1; }
    }
    std::printf("[cpp20] PASS (%d vectors)\n", 6);
    return 0;
}
