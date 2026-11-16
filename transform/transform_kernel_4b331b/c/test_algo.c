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
        double got = transform_kernel(0.25, 0.5, 0.85);
        if (fabs(got - 1909.622642717178) > 1.0e-7) { fprintf(stderr, "case 0 float mismatch: got=%.12f\n", got); return 1; }
    }
    /* Case 1: ascending_ordered_5 */
    {
        double got = transform_kernel(0.5, 0.85, 1.2);
        if (fabs(got - 1891.157969899553) > 1.0e-7) { fprintf(stderr, "case 1 float mismatch: got=%.12f\n", got); return 1; }
    }
    /* Case 2: descending_ordered_6 */
    {
        double got = transform_kernel(0.85, 1.2, 0.15);
        if (fabs(got - 2017.31939216512) > 1.0e-7) { fprintf(stderr, "case 2 float mismatch: got=%.12f\n", got); return 1; }
    }
    /* Case 3: mixed_duplicates_7 */
    {
        double got = transform_kernel(1.2, 0.15, 0.65);
        if (fabs(got - 1933.009282206801) > 1.0e-7) { fprintf(stderr, "case 3 float mismatch: got=%.12f\n", got); return 1; }
    }
    /* Case 4: uniform_distribution_4 */
    {
        double got = transform_kernel(0.15, 0.65, 0.35);
        if (fabs(got - 1961.364431006174) > 1.0e-7) { fprintf(stderr, "case 4 float mismatch: got=%.12f\n", got); return 1; }
    }
    /* Case 5: pseudo_random_prime_11 */
    {
        double got = transform_kernel(0.65, 0.35, 0.25);
        if (fabs(got - 1985.350175610173) > 1.0e-7) { fprintf(stderr, "case 5 float mismatch: got=%.12f\n", got); return 1; }
    }
    printf("[c11] PASS (%d vectors)\n", 6);
    return 0;
}
