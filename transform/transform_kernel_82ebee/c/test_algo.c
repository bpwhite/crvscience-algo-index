// SPDX-License-Identifier: GPL-3.0-only
#include "algo.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    /* Case 0: singleton_unit */
    {
        double got = transform_kernel(0.25, 0.5, 0.85);
        if (fabs(got - 20.807210873631) > 1.0e-7) { fprintf(stderr, "case 0 float mismatch: got=%.12f\n", got); return 1; }
    }
    /* Case 1: ascending_ordered_5 */
    {
        double got = transform_kernel(0.5, 0.85, 1.2);
        if (fabs(got - 18.13708866001) > 1.0e-7) { fprintf(stderr, "case 1 float mismatch: got=%.12f\n", got); return 1; }
    }
    /* Case 2: descending_ordered_6 */
    {
        double got = transform_kernel(0.85, 1.2, 0.15);
        if (fabs(got - 31.960977671339) > 1.0e-7) { fprintf(stderr, "case 2 float mismatch: got=%.12f\n", got); return 1; }
    }
    /* Case 3: mixed_duplicates_7 */
    {
        double got = transform_kernel(1.2, 0.15, 0.65);
        if (fabs(got - 16.784177098499) > 1.0e-7) { fprintf(stderr, "case 3 float mismatch: got=%.12f\n", got); return 1; }
    }
    /* Case 4: uniform_distribution_4 */
    {
        double got = transform_kernel(0.15, 0.65, 0.35);
        if (fabs(got - 47.30635589562) > 1.0e-7) { fprintf(stderr, "case 4 float mismatch: got=%.12f\n", got); return 1; }
    }
    /* Case 5: pseudo_random_prime_11 */
    {
        double got = transform_kernel(0.65, 0.35, 0.25);
        if (fabs(got - 32.870423297252) > 1.0e-7) { fprintf(stderr, "case 5 float mismatch: got=%.12f\n", got); return 1; }
    }
    printf("[c11] PASS (%d vectors)\n", 6);
    return 0;
}
