// SPDX-License-Identifier: GPL-3.0-only
#include "algo.hpp"
#include <cmath>
#include <cstdio>
#include <vector>

int main() {
    // Case 0: singleton_unit
    {
        int64_t got = algo::sample(0.25, 0.5);
        if (got != INT64_C(0)) { fprintf(stderr, "case 0 failed: got=%lld\n", (long long)got); return 1; }
    }
    // Case 1: ascending_ordered_5
    {
        int64_t got = algo::sample(0.5, 0.85);
        if (got != INT64_C(1)) { fprintf(stderr, "case 1 failed: got=%lld\n", (long long)got); return 1; }
    }
    // Case 2: descending_ordered_6
    {
        int64_t got = algo::sample(0.85, 1.2);
        if (got != INT64_C(96)) { fprintf(stderr, "case 2 failed: got=%lld\n", (long long)got); return 1; }
    }
    // Case 3: mixed_duplicates_7
    {
        int64_t got = algo::sample(1.2, 0.15);
        if (got != INT64_C(0)) { fprintf(stderr, "case 3 failed: got=%lld\n", (long long)got); return 1; }
    }
    // Case 4: uniform_distribution_4
    {
        int64_t got = algo::sample(0.15, 0.65);
        if (got != INT64_C(0)) { fprintf(stderr, "case 4 failed: got=%lld\n", (long long)got); return 1; }
    }
    // Case 5: pseudo_random_prime_11
    {
        int64_t got = algo::sample(0.65, 0.35);
        if (got != INT64_C(0)) { fprintf(stderr, "case 5 failed: got=%lld\n", (long long)got); return 1; }
    }
    std::printf("[cpp20] PASS (%d vectors)\n", 6);
    return 0;
}
