// SPDX-License-Identifier: GPL-3.0-only
#include "algo.hpp"
#include <cmath>
#include <cstdio>
#include <vector>

int main() {
    // Case 0: empty_boundary
    {
        std::vector<double> xs = {};
        int64_t got = algo::nearest_rung_index(xs, 0.85);
        if (got != INT64_C(0)) { fprintf(stderr, "case 0 failed: got=%lld\n", (long long)got); return 1; }
    }
    // Case 1: singleton_unit
    {
        std::vector<double> xs = {1.0};
        int64_t got = algo::nearest_rung_index(xs, 0.5);
        if (got != INT64_C(0)) { fprintf(stderr, "case 1 failed: got=%lld\n", (long long)got); return 1; }
    }
    // Case 2: ascending_ordered_5
    {
        std::vector<double> xs = {0.5, 1.0, 1.5, 2.0, 2.5};
        int64_t got = algo::nearest_rung_index(xs, 0.85);
        if (got != INT64_C(1)) { fprintf(stderr, "case 2 failed: got=%lld\n", (long long)got); return 1; }
    }
    // Case 3: descending_ordered_6
    {
        std::vector<double> xs = {5.0, 4.25, 3.5, 2.75, 2.0, 1.25};
        int64_t got = algo::nearest_rung_index(xs, 1.2);
        if (got != INT64_C(5)) { fprintf(stderr, "case 3 failed: got=%lld\n", (long long)got); return 1; }
    }
    // Case 4: mixed_duplicates_7
    {
        std::vector<double> xs = {0.75, 2.0, 1.0, 2.25, 1.25, 0.25, 1.5};
        int64_t got = algo::nearest_rung_index(xs, 0.15);
        if (got != INT64_C(5)) { fprintf(stderr, "case 4 failed: got=%lld\n", (long long)got); return 1; }
    }
    // Case 5: uniform_distribution_4
    {
        std::vector<double> xs = {0.25, 0.25, 0.25, 0.25};
        int64_t got = algo::nearest_rung_index(xs, 0.65);
        if (got != INT64_C(0)) { fprintf(stderr, "case 5 failed: got=%lld\n", (long long)got); return 1; }
    }
    // Case 6: pseudo_random_prime_11
    {
        std::vector<double> xs = {3.6, 2.4, 1.2, 3.8, 2.6, 1.4, 0.2, 2.8, 1.6, 0.4, 3.0};
        int64_t got = algo::nearest_rung_index(xs, 0.35);
        if (got != INT64_C(9)) { fprintf(stderr, "case 6 failed: got=%lld\n", (long long)got); return 1; }
    }
    std::printf("[cpp20] PASS (%d vectors)\n", 7);
    return 0;
}
