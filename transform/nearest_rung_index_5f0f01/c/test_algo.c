// SPDX-License-Identifier: GPL-3.0-only
#include "algo.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    /* Case 0: empty_boundary */
    {
        double xs_dummy[1] = {0.0};
        int64_t got = nearest_rung_index(xs_dummy, 0, 0.85);
        if (got != INT64_C(0)) { fprintf(stderr, "case 0 failed: got=%lld\n", (long long)got); return 1; }
    }
    /* Case 1: singleton_unit */
    {
        double xs[1] = {1.0};
        int64_t got = nearest_rung_index(xs, 1U, 0.5);
        if (got != INT64_C(0)) { fprintf(stderr, "case 1 failed: got=%lld\n", (long long)got); return 1; }
    }
    /* Case 2: ascending_ordered_5 */
    {
        double xs[5] = {0.5, 1.0, 1.5, 2.0, 2.5};
        int64_t got = nearest_rung_index(xs, 5U, 0.85);
        if (got != INT64_C(1)) { fprintf(stderr, "case 2 failed: got=%lld\n", (long long)got); return 1; }
    }
    /* Case 3: descending_ordered_6 */
    {
        double xs[6] = {5.0, 4.25, 3.5, 2.75, 2.0, 1.25};
        int64_t got = nearest_rung_index(xs, 6U, 1.2);
        if (got != INT64_C(5)) { fprintf(stderr, "case 3 failed: got=%lld\n", (long long)got); return 1; }
    }
    /* Case 4: mixed_duplicates_7 */
    {
        double xs[7] = {0.75, 2.0, 1.0, 2.25, 1.25, 0.25, 1.5};
        int64_t got = nearest_rung_index(xs, 7U, 0.15);
        if (got != INT64_C(5)) { fprintf(stderr, "case 4 failed: got=%lld\n", (long long)got); return 1; }
    }
    /* Case 5: uniform_distribution_4 */
    {
        double xs[4] = {0.25, 0.25, 0.25, 0.25};
        int64_t got = nearest_rung_index(xs, 4U, 0.65);
        if (got != INT64_C(0)) { fprintf(stderr, "case 5 failed: got=%lld\n", (long long)got); return 1; }
    }
    /* Case 6: pseudo_random_prime_11 */
    {
        double xs[11] = {3.6, 2.4, 1.2, 3.8, 2.6, 1.4, 0.2, 2.8, 1.6, 0.4, 3.0};
        int64_t got = nearest_rung_index(xs, 11U, 0.35);
        if (got != INT64_C(9)) { fprintf(stderr, "case 6 failed: got=%lld\n", (long long)got); return 1; }
    }
    printf("[c11] PASS (%d vectors)\n", 7);
    return 0;
}
