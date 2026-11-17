// SPDX-License-Identifier: GPL-3.0-only
#include "algo.hpp"
#include <cmath>
#include <cstdio>
#include <vector>

int main() {
    // Case 0: empty_boundary
    {
        std::vector<int64_t> xs = {};
        double got = algo::shannon_entropy_bits(xs);
        if (fabs(got - 0.0) > 1.0e-7) { fprintf(stderr, "case 0 float mismatch: got=%.12f\n", got); return 1; }
    }
    // Case 1: singleton_unit
    {
        std::vector<int64_t> xs = {INT64_C(5)};
        double got = algo::shannon_entropy_bits(xs);
        if (fabs(got - 0.0) > 1.0e-7) { fprintf(stderr, "case 1 float mismatch: got=%.12f\n", got); return 1; }
    }
    // Case 2: ascending_ordered_5
    {
        std::vector<int64_t> xs = {INT64_C(1), INT64_C(3), INT64_C(5), INT64_C(7), INT64_C(9)};
        double got = algo::shannon_entropy_bits(xs);
        if (fabs(got - 2.062042692015) > 1.0e-7) { fprintf(stderr, "case 2 float mismatch: got=%.12f\n", got); return 1; }
    }
    // Case 3: descending_ordered_6
    {
        std::vector<int64_t> xs = {INT64_C(17), INT64_C(14), INT64_C(11), INT64_C(8), INT64_C(5), INT64_C(2)};
        double got = algo::shannon_entropy_bits(xs);
        if (fabs(got - 2.351254479261) > 1.0e-7) { fprintf(stderr, "case 3 float mismatch: got=%.12f\n", got); return 1; }
    }
    // Case 4: mixed_duplicates_7
    {
        std::vector<int64_t> xs = {INT64_C(4), INT64_C(1), INT64_C(4), INT64_C(9), INT64_C(2), INT64_C(9), INT64_C(5)};
        double got = algo::shannon_entropy_bits(xs);
        if (fabs(got - 2.538395473592) > 1.0e-7) { fprintf(stderr, "case 4 float mismatch: got=%.12f\n", got); return 1; }
    }
    // Case 5: uniform_distribution_4
    {
        std::vector<int64_t> xs = {INT64_C(3), INT64_C(3), INT64_C(3), INT64_C(3)};
        double got = algo::shannon_entropy_bits(xs);
        if (fabs(got - 2.0) > 1.0e-7) { fprintf(stderr, "case 5 float mismatch: got=%.12f\n", got); return 1; }
    }
    // Case 6: pseudo_random_prime_11
    {
        std::vector<int64_t> xs = {INT64_C(24), INT64_C(12), INT64_C(29), INT64_C(17), INT64_C(5), INT64_C(22), INT64_C(10), INT64_C(27), INT64_C(15), INT64_C(3), INT64_C(20)};
        double got = algo::shannon_entropy_bits(xs);
        if (fabs(got - 3.259745895667) > 1.0e-7) { fprintf(stderr, "case 6 float mismatch: got=%.12f\n", got); return 1; }
    }
    std::printf("[cpp20] PASS (%d vectors)\n", 7);
    return 0;
}
