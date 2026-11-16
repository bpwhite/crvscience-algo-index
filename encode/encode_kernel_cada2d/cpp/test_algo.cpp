// SPDX-License-Identifier: GPL-3.0-or-later
// Copyright (C) 2026 CRV Science Network (https://crvscience.com)
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://gnu.org>.

#include "algo.hpp"
#include <cmath>
#include <cstdio>
#include <vector>

int main() {
    // Case 0: singleton_unit
    {
        std::vector<int64_t> xs = {INT64_C(5)};
        int64_t got = algo::encode_kernel(xs, INT64_C(5));
        if (got != INT64_C(0)) { fprintf(stderr, "case 0 failed: got=%lld\n", (long long)got); return 1; }
    }
    // Case 1: ascending_ordered_5
    {
        std::vector<int64_t> xs = {INT64_C(1), INT64_C(3), INT64_C(5), INT64_C(7), INT64_C(9)};
        int64_t got = algo::encode_kernel(xs, INT64_C(9));
        if (got != INT64_C(1)) { fprintf(stderr, "case 1 failed: got=%lld\n", (long long)got); return 1; }
    }
    // Case 2: descending_ordered_6
    {
        std::vector<int64_t> xs = {INT64_C(17), INT64_C(14), INT64_C(11), INT64_C(8), INT64_C(5), INT64_C(2)};
        int64_t got = algo::encode_kernel(xs, INT64_C(4));
        if (got != INT64_C(1)) { fprintf(stderr, "case 2 failed: got=%lld\n", (long long)got); return 1; }
    }
    // Case 3: mixed_duplicates_7
    {
        std::vector<int64_t> xs = {INT64_C(4), INT64_C(1), INT64_C(4), INT64_C(9), INT64_C(2), INT64_C(9), INT64_C(5)};
        int64_t got = algo::encode_kernel(xs, INT64_C(7));
        if (got != INT64_C(0)) { fprintf(stderr, "case 3 failed: got=%lld\n", (long long)got); return 1; }
    }
    // Case 4: uniform_distribution_4
    {
        std::vector<int64_t> xs = {INT64_C(3), INT64_C(3), INT64_C(3), INT64_C(3)};
        int64_t got = algo::encode_kernel(xs, INT64_C(12));
        if (got != INT64_C(0)) { fprintf(stderr, "case 4 failed: got=%lld\n", (long long)got); return 1; }
    }
    // Case 5: pseudo_random_prime_11
    {
        std::vector<int64_t> xs = {INT64_C(24), INT64_C(12), INT64_C(29), INT64_C(17), INT64_C(5), INT64_C(22), INT64_C(10), INT64_C(27), INT64_C(15), INT64_C(3), INT64_C(20)};
        int64_t got = algo::encode_kernel(xs, INT64_C(3));
        if (got != INT64_C(1)) { fprintf(stderr, "case 5 failed: got=%lld\n", (long long)got); return 1; }
    }
    std::printf("[cpp20] PASS (%d vectors)\n", 6);
    return 0;
}
