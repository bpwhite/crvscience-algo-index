// SPDX-License-Identifier: GPL-3.0-only
#include "algo.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    /* Case 0: singleton_unit */
    {
        double got = project_kernel(INT64_C(2), 0.5, INT64_C(9));
        if (fabs(got - 0.05) > 1.0e-7) { fprintf(stderr, "case 0 float mismatch: got=%.12f\n", got); return 1; }
    }
    /* Case 1: ascending_ordered_5 */
    {
        double got = project_kernel(INT64_C(5), 0.85, INT64_C(4));
        if (fabs(got - 0.295002111109) > 1.0e-7) { fprintf(stderr, "case 1 float mismatch: got=%.12f\n", got); return 1; }
    }
    /* Case 2: descending_ordered_6 */
    {
        double got = project_kernel(INT64_C(9), 1.2, INT64_C(7));
        if (fabs(got - 0.145811095701) > 1.0e-7) { fprintf(stderr, "case 2 float mismatch: got=%.12f\n", got); return 1; }
    }
    /* Case 3: mixed_duplicates_7 */
    {
        double got = project_kernel(INT64_C(4), 0.15, INT64_C(12));
        if (fabs(got - 0.05) > 1.0e-7) { fprintf(stderr, "case 3 float mismatch: got=%.12f\n", got); return 1; }
    }
    /* Case 4: uniform_distribution_4 */
    {
        double got = project_kernel(INT64_C(7), 0.65, INT64_C(3));
        if (fabs(got - 0.624858671293) > 1.0e-7) { fprintf(stderr, "case 4 float mismatch: got=%.12f\n", got); return 1; }
    }
    /* Case 5: pseudo_random_prime_11 */
    {
        double got = project_kernel(INT64_C(12), 0.35, INT64_C(2));
        if (fabs(got - 0.974365889415) > 1.0e-7) { fprintf(stderr, "case 5 float mismatch: got=%.12f\n", got); return 1; }
    }
    printf("[c11] PASS (%d vectors)\n", 6);
    return 0;
}
