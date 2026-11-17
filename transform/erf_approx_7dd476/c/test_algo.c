// SPDX-License-Identifier: GPL-3.0-only
#include "algo.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    /* Case 0: singleton_unit */
    {
        double got = erf_approx(0.25);
        if (fabs(got - 0.276326386495) > 1.0e-7) { fprintf(stderr, "case 0 float mismatch: got=%.12f\n", got); return 1; }
    }
    /* Case 1: ascending_ordered_5 */
    {
        double got = erf_approx(0.5);
        if (fabs(got - 0.520499907723) > 1.0e-7) { fprintf(stderr, "case 1 float mismatch: got=%.12f\n", got); return 1; }
    }
    /* Case 2: descending_ordered_6 */
    {
        double got = erf_approx(0.85);
        if (fabs(got - 0.770668042045) > 1.0e-7) { fprintf(stderr, "case 2 float mismatch: got=%.12f\n", got); return 1; }
    }
    /* Case 3: mixed_duplicates_7 */
    {
        double got = erf_approx(1.2);
        if (fabs(got - 0.910313982035) > 1.0e-7) { fprintf(stderr, "case 3 float mismatch: got=%.12f\n", got); return 1; }
    }
    /* Case 4: uniform_distribution_4 */
    {
        double got = erf_approx(0.15);
        if (fabs(got - 0.167995939849) > 1.0e-7) { fprintf(stderr, "case 4 float mismatch: got=%.12f\n", got); return 1; }
    }
    /* Case 5: pseudo_random_prime_11 */
    {
        double got = erf_approx(0.65);
        if (fabs(got - 0.642029319614) > 1.0e-7) { fprintf(stderr, "case 5 float mismatch: got=%.12f\n", got); return 1; }
    }
    printf("[c11] PASS (%d vectors)\n", 6);
    return 0;
}
