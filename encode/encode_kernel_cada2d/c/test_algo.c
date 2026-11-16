// SPDX-License-Identifier: GPL-3.0-only
#include "algo.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    /* Case 0: singleton_unit */
    {
        int64_t xs[1] = {INT64_C(5)};
        int64_t got = encode_kernel(xs, 1U, INT64_C(5));
        if (got != INT64_C(0)) { fprintf(stderr, "case 0 failed: got=%lld\n", (long long)got); return 1; }
    }
    /* Case 1: ascending_ordered_5 */
    {
        int64_t xs[5] = {INT64_C(1), INT64_C(3), INT64_C(5), INT64_C(7), INT64_C(9)};
        int64_t got = encode_kernel(xs, 5U, INT64_C(9));
        if (got != INT64_C(1)) { fprintf(stderr, "case 1 failed: got=%lld\n", (long long)got); return 1; }
    }
    /* Case 2: descending_ordered_6 */
    {
        int64_t xs[6] = {INT64_C(17), INT64_C(14), INT64_C(11), INT64_C(8), INT64_C(5), INT64_C(2)};
        int64_t got = encode_kernel(xs, 6U, INT64_C(4));
        if (got != INT64_C(1)) { fprintf(stderr, "case 2 failed: got=%lld\n", (long long)got); return 1; }
    }
    /* Case 3: mixed_duplicates_7 */
    {
        int64_t xs[7] = {INT64_C(4), INT64_C(1), INT64_C(4), INT64_C(9), INT64_C(2), INT64_C(9), INT64_C(5)};
        int64_t got = encode_kernel(xs, 7U, INT64_C(7));
        if (got != INT64_C(0)) { fprintf(stderr, "case 3 failed: got=%lld\n", (long long)got); return 1; }
    }
    /* Case 4: uniform_distribution_4 */
    {
        int64_t xs[4] = {INT64_C(3), INT64_C(3), INT64_C(3), INT64_C(3)};
        int64_t got = encode_kernel(xs, 4U, INT64_C(12));
        if (got != INT64_C(0)) { fprintf(stderr, "case 4 failed: got=%lld\n", (long long)got); return 1; }
    }
    /* Case 5: pseudo_random_prime_11 */
    {
        int64_t xs[11] = {INT64_C(24), INT64_C(12), INT64_C(29), INT64_C(17), INT64_C(5), INT64_C(22), INT64_C(10), INT64_C(27), INT64_C(15), INT64_C(3), INT64_C(20)};
        int64_t got = encode_kernel(xs, 11U, INT64_C(3));
        if (got != INT64_C(1)) { fprintf(stderr, "case 5 failed: got=%lld\n", (long long)got); return 1; }
    }
    printf("[c11] PASS (%d vectors)\n", 6);
    return 0;
}
