// SPDX-License-Identifier: GPL-3.0-only
#include "algo.hpp"
#include <cmath>
#include <cstdio>
#include <vector>

int main() {
    // Case 0: singleton_unit
    {
        bool got = algo::has_bit64(INT64_C(2), INT64_C(5), INT64_C(9));
        if (got != false) { fprintf(stderr, "case 0 bool mismatch\n"); return 1; }
    }
    // Case 1: ascending_ordered_5
    {
        bool got = algo::has_bit64(INT64_C(5), INT64_C(9), INT64_C(4));
        if (got != false) { fprintf(stderr, "case 1 bool mismatch\n"); return 1; }
    }
    // Case 2: descending_ordered_6
    {
        bool got = algo::has_bit64(INT64_C(9), INT64_C(4), INT64_C(7));
        if (got != false) { fprintf(stderr, "case 2 bool mismatch\n"); return 1; }
    }
    // Case 3: mixed_duplicates_7
    {
        bool got = algo::has_bit64(INT64_C(4), INT64_C(7), INT64_C(12));
        if (got != false) { fprintf(stderr, "case 3 bool mismatch\n"); return 1; }
    }
    // Case 4: uniform_distribution_4
    {
        bool got = algo::has_bit64(INT64_C(7), INT64_C(12), INT64_C(3));
        if (got != false) { fprintf(stderr, "case 4 bool mismatch\n"); return 1; }
    }
    // Case 5: pseudo_random_prime_11
    {
        bool got = algo::has_bit64(INT64_C(12), INT64_C(3), INT64_C(2));
        if (got != true) { fprintf(stderr, "case 5 bool mismatch\n"); return 1; }
    }
    std::printf("[cpp20] PASS (%d vectors)\n", 6);
    return 0;
}
