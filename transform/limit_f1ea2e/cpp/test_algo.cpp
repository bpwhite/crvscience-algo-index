// SPDX-License-Identifier: GPL-3.0-only
#include "algo.hpp"
#include <cmath>
#include <cstdio>
#include <vector>

int main() {
    // Case 0: singleton_unit
    {
        int64_t got = algo::limit(INT64_C(2));
        if (got != INT64_C(3)) { fprintf(stderr, "case 0 failed: got=%lld\n", (long long)got); return 1; }
    }
    // Case 1: ascending_ordered_5
    {
        int64_t got = algo::limit(INT64_C(5));
        if (got != INT64_C(3)) { fprintf(stderr, "case 1 failed: got=%lld\n", (long long)got); return 1; }
    }
    // Case 2: descending_ordered_6
    {
        int64_t got = algo::limit(INT64_C(9));
        if (got != INT64_C(3)) { fprintf(stderr, "case 2 failed: got=%lld\n", (long long)got); return 1; }
    }
    // Case 3: mixed_duplicates_7
    {
        int64_t got = algo::limit(INT64_C(4));
        if (got != INT64_C(3)) { fprintf(stderr, "case 3 failed: got=%lld\n", (long long)got); return 1; }
    }
    // Case 4: uniform_distribution_4
    {
        int64_t got = algo::limit(INT64_C(7));
        if (got != INT64_C(3)) { fprintf(stderr, "case 4 failed: got=%lld\n", (long long)got); return 1; }
    }
    // Case 5: pseudo_random_prime_11
    {
        int64_t got = algo::limit(INT64_C(12));
        if (got != INT64_C(3)) { fprintf(stderr, "case 5 failed: got=%lld\n", (long long)got); return 1; }
    }
    std::printf("[cpp20] PASS (%d vectors)\n", 6);
    return 0;
}
