// SPDX-License-Identifier: GPL-3.0-only
#include "algo.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    /* Case 0: singleton_unit */
    {
        int64_t buf[1] = {INT64_C(5)};
        encode_kernel(buf, 1U, INT64_C(5));
        if (buf[0] != INT64_C(37)) { fprintf(stderr, "case 0 mut[0] mismatch\n"); return 1; }
    }
    /* Case 1: ascending_ordered_5 */
    {
        int64_t buf[5] = {INT64_C(1), INT64_C(3), INT64_C(5), INT64_C(7), INT64_C(9)};
        encode_kernel(buf, 5U, INT64_C(9));
        if (buf[0] != INT64_C(1)) { fprintf(stderr, "case 1 mut[0] mismatch\n"); return 1; }
        if (buf[1] != INT64_C(3)) { fprintf(stderr, "case 1 mut[1] mismatch\n"); return 1; }
        if (buf[2] != INT64_C(5)) { fprintf(stderr, "case 1 mut[2] mismatch\n"); return 1; }
        if (buf[3] != INT64_C(7)) { fprintf(stderr, "case 1 mut[3] mismatch\n"); return 1; }
        if (buf[4] != INT64_C(9)) { fprintf(stderr, "case 1 mut[4] mismatch\n"); return 1; }
    }
    /* Case 2: descending_ordered_6 */
    {
        int64_t buf[6] = {INT64_C(17), INT64_C(14), INT64_C(11), INT64_C(8), INT64_C(5), INT64_C(2)};
        encode_kernel(buf, 6U, INT64_C(4));
        if (buf[0] != INT64_C(17)) { fprintf(stderr, "case 2 mut[0] mismatch\n"); return 1; }
        if (buf[1] != INT64_C(14)) { fprintf(stderr, "case 2 mut[1] mismatch\n"); return 1; }
        if (buf[2] != INT64_C(11)) { fprintf(stderr, "case 2 mut[2] mismatch\n"); return 1; }
        if (buf[3] != INT64_C(8)) { fprintf(stderr, "case 2 mut[3] mismatch\n"); return 1; }
        if (buf[4] != INT64_C(5)) { fprintf(stderr, "case 2 mut[4] mismatch\n"); return 1; }
        if (buf[5] != INT64_C(2)) { fprintf(stderr, "case 2 mut[5] mismatch\n"); return 1; }
    }
    /* Case 3: mixed_duplicates_7 */
    {
        int64_t buf[7] = {INT64_C(4), INT64_C(1), INT64_C(4), INT64_C(9), INT64_C(2), INT64_C(9), INT64_C(5)};
        encode_kernel(buf, 7U, INT64_C(7));
        if (buf[0] != INT64_C(132)) { fprintf(stderr, "case 3 mut[0] mismatch\n"); return 1; }
        if (buf[1] != INT64_C(1)) { fprintf(stderr, "case 3 mut[1] mismatch\n"); return 1; }
        if (buf[2] != INT64_C(4)) { fprintf(stderr, "case 3 mut[2] mismatch\n"); return 1; }
        if (buf[3] != INT64_C(9)) { fprintf(stderr, "case 3 mut[3] mismatch\n"); return 1; }
        if (buf[4] != INT64_C(2)) { fprintf(stderr, "case 3 mut[4] mismatch\n"); return 1; }
        if (buf[5] != INT64_C(9)) { fprintf(stderr, "case 3 mut[5] mismatch\n"); return 1; }
        if (buf[6] != INT64_C(5)) { fprintf(stderr, "case 3 mut[6] mismatch\n"); return 1; }
    }
    /* Case 4: uniform_distribution_4 */
    {
        int64_t buf[4] = {INT64_C(3), INT64_C(3), INT64_C(3), INT64_C(3)};
        encode_kernel(buf, 4U, INT64_C(12));
        if (buf[0] != INT64_C(3)) { fprintf(stderr, "case 4 mut[0] mismatch\n"); return 1; }
        if (buf[1] != INT64_C(19)) { fprintf(stderr, "case 4 mut[1] mismatch\n"); return 1; }
        if (buf[2] != INT64_C(3)) { fprintf(stderr, "case 4 mut[2] mismatch\n"); return 1; }
        if (buf[3] != INT64_C(3)) { fprintf(stderr, "case 4 mut[3] mismatch\n"); return 1; }
    }
    /* Case 5: pseudo_random_prime_11 */
    {
        int64_t buf[11] = {INT64_C(24), INT64_C(12), INT64_C(29), INT64_C(17), INT64_C(5), INT64_C(22), INT64_C(10), INT64_C(27), INT64_C(15), INT64_C(3), INT64_C(20)};
        encode_kernel(buf, 11U, INT64_C(3));
        if (buf[0] != INT64_C(24)) { fprintf(stderr, "case 5 mut[0] mismatch\n"); return 1; }
        if (buf[1] != INT64_C(12)) { fprintf(stderr, "case 5 mut[1] mismatch\n"); return 1; }
        if (buf[2] != INT64_C(29)) { fprintf(stderr, "case 5 mut[2] mismatch\n"); return 1; }
        if (buf[3] != INT64_C(17)) { fprintf(stderr, "case 5 mut[3] mismatch\n"); return 1; }
        if (buf[4] != INT64_C(5)) { fprintf(stderr, "case 5 mut[4] mismatch\n"); return 1; }
        if (buf[5] != INT64_C(22)) { fprintf(stderr, "case 5 mut[5] mismatch\n"); return 1; }
        if (buf[6] != INT64_C(10)) { fprintf(stderr, "case 5 mut[6] mismatch\n"); return 1; }
        if (buf[7] != INT64_C(27)) { fprintf(stderr, "case 5 mut[7] mismatch\n"); return 1; }
        if (buf[8] != INT64_C(15)) { fprintf(stderr, "case 5 mut[8] mismatch\n"); return 1; }
        if (buf[9] != INT64_C(3)) { fprintf(stderr, "case 5 mut[9] mismatch\n"); return 1; }
        if (buf[10] != INT64_C(20)) { fprintf(stderr, "case 5 mut[10] mismatch\n"); return 1; }
    }
    printf("[c11] PASS (%d vectors)\n", 6);
    return 0;
}
