// SPDX-License-Identifier: GPL-3.0-only
#include "algo.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    /* Case 0: empty_boundary */
    {
        double xs_dummy[1] = {0.0};
        double ys_dummy[1] = {0.0};
        double got = trapezoidal_auc(xs_dummy, 0, ys_dummy, 0);
        if (fabs(got - 0.0) > 1.0e-7) { fprintf(stderr, "case 0 float mismatch: got=%.12f\n", got); return 1; }
    }
    /* Case 1: singleton_unit */
    {
        double xs[1] = {1.0};
        double ys[1] = {1.0};
        double got = trapezoidal_auc(xs, 1U, ys, 1U);
        if (fabs(got - 0.0) > 1.0e-7) { fprintf(stderr, "case 1 float mismatch: got=%.12f\n", got); return 1; }
    }
    /* Case 2: ascending_ordered_5 */
    {
        double xs[5] = {0.5, 1.0, 1.5, 2.0, 2.5};
        double ys[5] = {0.75, 1.25, 1.75, 2.25, 2.75};
        double got = trapezoidal_auc(xs, 5U, ys, 5U);
        if (fabs(got - 3.5) > 1.0e-7) { fprintf(stderr, "case 2 float mismatch: got=%.12f\n", got); return 1; }
    }
    /* Case 3: descending_ordered_6 */
    {
        double xs[6] = {5.0, 4.25, 3.5, 2.75, 2.0, 1.25};
        double ys[6] = {5.0, 4.25, 3.5, 2.75, 2.0, 1.25};
        double got = trapezoidal_auc(xs, 6U, ys, 6U);
        if (fabs(got - 0.0) > 1.0e-7) { fprintf(stderr, "case 3 float mismatch: got=%.12f\n", got); return 1; }
    }
    /* Case 4: mixed_duplicates_7 */
    {
        double xs[7] = {0.75, 2.0, 1.0, 2.25, 1.25, 0.25, 1.5};
        double ys[7] = {1.5, 0.5, 1.75, 0.75, 2.0, 1.0, 2.25};
        double got = trapezoidal_auc(xs, 7U, ys, 7U);
        if (fabs(got - 4.84375) > 1.0e-7) { fprintf(stderr, "case 4 float mismatch: got=%.12f\n", got); return 1; }
    }
    /* Case 5: uniform_distribution_4 */
    {
        double xs[4] = {0.25, 0.25, 0.25, 0.25};
        double ys[4] = {0.25, 0.25, 0.25, 0.25};
        double got = trapezoidal_auc(xs, 4U, ys, 4U);
        if (fabs(got - 0.0) > 1.0e-7) { fprintf(stderr, "case 5 float mismatch: got=%.12f\n", got); return 1; }
    }
    /* Case 6: pseudo_random_prime_11 */
    {
        double xs[11] = {3.6, 2.4, 1.2, 3.8, 2.6, 1.4, 0.2, 2.8, 1.6, 0.4, 3.0};
        double ys[11] = {3.0, 1.8, 0.6, 3.2, 2.0, 0.8, 3.4, 2.2, 1.0, 3.6, 2.4};
        double got = trapezoidal_auc(xs, 11U, ys, 11U);
        if (fabs(got - 20.02) > 1.0e-7) { fprintf(stderr, "case 6 float mismatch: got=%.12f\n", got); return 1; }
    }
    printf("[c11] PASS (%d vectors)\n", 7);
    return 0;
}
