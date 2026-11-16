// SPDX-License-Identifier: GPL-3.0-only
#include "algo.hpp"
#include <cmath>
#include <cstdio>
#include <vector>

int main() {
    // Case 0: singleton_unit
    {
        int64_t got = algo::encode_kernel(INT64_C(2), INT64_C(5), INT64_C(9));
        if (got != INT64_C(132361)) { fprintf(stderr, "case 0 failed: got=%lld\n", (long long)got); return 1; }
    }
    // Case 1: ascending_ordered_5
    {
        int64_t got = algo::encode_kernel(INT64_C(5), INT64_C(9), INT64_C(4));
        if (got != INT64_C(329988)) { fprintf(stderr, "case 1 failed: got=%lld\n", (long long)got); return 1; }
    }
    // Case 2: descending_ordered_6
    {
        int64_t got = algo::encode_kernel(INT64_C(9), INT64_C(4), INT64_C(7));
        if (got != INT64_C(590855)) { fprintf(stderr, "case 2 failed: got=%lld\n", (long long)got); return 1; }
    }
    // Case 3: mixed_duplicates_7
    {
        int64_t got = algo::encode_kernel(INT64_C(4), INT64_C(7), INT64_C(12));
        if (got != INT64_C(263948)) { fprintf(stderr, "case 3 failed: got=%lld\n", (long long)got); return 1; }
    }
    // Case 4: uniform_distribution_4
    {
        int64_t got = algo::encode_kernel(INT64_C(7), INT64_C(12), INT64_C(3));
        if (got != INT64_C(461827)) { fprintf(stderr, "case 4 failed: got=%lld\n", (long long)got); return 1; }
    }
    // Case 5: pseudo_random_prime_11
    {
        int64_t got = algo::encode_kernel(INT64_C(12), INT64_C(3), INT64_C(2));
        if (got != INT64_C(787202)) { fprintf(stderr, "case 5 failed: got=%lld\n", (long long)got); return 1; }
    }
    std::printf("[cpp20] PASS (%d vectors)\n", 6);
    return 0;
}
