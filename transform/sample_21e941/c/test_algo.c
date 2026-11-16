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

#include "algo.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    /* Case 0: singleton_unit */
    {
        int64_t got = sample(0.25, 0.5);
        if (got != INT64_C(0)) { fprintf(stderr, "case 0 failed: got=%lld\n", (long long)got); return 1; }
    }
    /* Case 1: ascending_ordered_5 */
    {
        int64_t got = sample(0.5, 0.85);
        if (got != INT64_C(1)) { fprintf(stderr, "case 1 failed: got=%lld\n", (long long)got); return 1; }
    }
    /* Case 2: descending_ordered_6 */
    {
        int64_t got = sample(0.85, 1.2);
        if (got != INT64_C(48)) { fprintf(stderr, "case 2 failed: got=%lld\n", (long long)got); return 1; }
    }
    /* Case 3: mixed_duplicates_7 */
    {
        int64_t got = sample(1.2, 0.15);
        if (got != INT64_C(0)) { fprintf(stderr, "case 3 failed: got=%lld\n", (long long)got); return 1; }
    }
    /* Case 4: uniform_distribution_4 */
    {
        int64_t got = sample(0.15, 0.65);
        if (got != INT64_C(0)) { fprintf(stderr, "case 4 failed: got=%lld\n", (long long)got); return 1; }
    }
    /* Case 5: pseudo_random_prime_11 */
    {
        int64_t got = sample(0.65, 0.35);
        if (got != INT64_C(0)) { fprintf(stderr, "case 5 failed: got=%lld\n", (long long)got); return 1; }
    }
    printf("[c11] PASS (%d vectors)\n", 6);
    return 0;
}
