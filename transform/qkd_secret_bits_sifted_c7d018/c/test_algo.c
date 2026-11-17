// SPDX-License-Identifier: GPL-3.0-only
#include "algo.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    /* Case 0: singleton_unit */
    {
        double got = qkd_secret_bits_sifted(INT64_C(2), 0.5);
        if (fabs(got - 0.0) > 1.0e-7) { fprintf(stderr, "case 0 float mismatch: got=%.12f\n", got); return 1; }
    }
    /* Case 1: ascending_ordered_5 */
    {
        double got = qkd_secret_bits_sifted(INT64_C(5), 0.85);
        if (fabs(got - 0.0) > 1.0e-7) { fprintf(stderr, "case 1 float mismatch: got=%.12f\n", got); return 1; }
    }
    /* Case 2: descending_ordered_6 */
    {
        double got = qkd_secret_bits_sifted(INT64_C(9), 1.2);
        if (fabs(got - 0.0) > 1.0e-7) { fprintf(stderr, "case 2 float mismatch: got=%.12f\n", got); return 1; }
    }
    /* Case 3: mixed_duplicates_7 */
    {
        double got = qkd_secret_bits_sifted(INT64_C(4), 0.15);
        if (fabs(got - 0.304830640351) > 1.0e-7) { fprintf(stderr, "case 3 float mismatch: got=%.12f\n", got); return 1; }
    }
    /* Case 4: uniform_distribution_4 */
    {
        double got = qkd_secret_bits_sifted(INT64_C(7), 0.65);
        if (fabs(got - 0.0) > 1.0e-7) { fprintf(stderr, "case 4 float mismatch: got=%.12f\n", got); return 1; }
    }
    /* Case 5: pseudo_random_prime_11 */
    {
        double got = qkd_secret_bits_sifted(INT64_C(12), 0.35);
        if (fabs(got - 0.0) > 1.0e-7) { fprintf(stderr, "case 5 float mismatch: got=%.12f\n", got); return 1; }
    }
    printf("[c11] PASS (%d vectors)\n", 6);
    return 0;
}
