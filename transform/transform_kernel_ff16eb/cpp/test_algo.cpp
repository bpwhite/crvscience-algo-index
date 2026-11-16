// SPDX-License-Identifier: GPL-3.0-only
#include "algo.hpp"
#include <cmath>
#include <cstdio>
#include <vector>

int main() {
    // Case 0: singleton_unit
    {
        double got = algo::transform_kernel(0.25, 0.5, 0.85);
        if (fabs(got - 86.155676532927) > 1.0e-7) { fprintf(stderr, "case 0 float mismatch: got=%.12f\n", got); return 1; }
    }
    // Case 1: ascending_ordered_5
    {
        double got = algo::transform_kernel(0.5, 0.85, 1.2);
        if (fabs(got - 113.063958963731) > 1.0e-7) { fprintf(stderr, "case 1 float mismatch: got=%.12f\n", got); return 1; }
    }
    // Case 2: descending_ordered_6
    {
        double got = algo::transform_kernel(0.85, 1.2, 0.15);
        if (fabs(got - 139.196531660132) > 1.0e-7) { fprintf(stderr, "case 2 float mismatch: got=%.12f\n", got); return 1; }
    }
    // Case 3: mixed_duplicates_7
    {
        double got = algo::transform_kernel(1.2, 0.15, 0.65);
        if (fabs(got - 70.453240705873) > 1.0e-7) { fprintf(stderr, "case 3 float mismatch: got=%.12f\n", got); return 1; }
    }
    // Case 4: uniform_distribution_4
    {
        double got = algo::transform_kernel(0.15, 0.65, 0.35);
        if (fabs(got - 90.618042497271) > 1.0e-7) { fprintf(stderr, "case 4 float mismatch: got=%.12f\n", got); return 1; }
    }
    // Case 5: pseudo_random_prime_11
    {
        double got = algo::transform_kernel(0.65, 0.35, 0.25);
        if (fabs(got - 85.385895104176) > 1.0e-7) { fprintf(stderr, "case 5 float mismatch: got=%.12f\n", got); return 1; }
    }
    std::printf("[cpp20] PASS (%d vectors)\n", 6);
    return 0;
}
