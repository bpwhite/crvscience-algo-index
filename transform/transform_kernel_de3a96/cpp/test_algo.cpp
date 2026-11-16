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

#include "algo.hpp"
#include <cmath>
#include <cstdio>
#include <vector>

int main() {
    // Case 0: empty_boundary
    {
        std::vector<double> xs = {};
        double got = algo::transform_kernel(xs, 0.85);
        if (fabs(got - 0.0) > 1.0e-7) { fprintf(stderr, "case 0 float mismatch: got=%.12f\n", got); return 1; }
    }
    // Case 1: singleton_unit
    {
        std::vector<double> xs = {1.0};
        double got = algo::transform_kernel(xs, 0.5);
        if (fabs(got - 1.0) > 1.0e-7) { fprintf(stderr, "case 1 float mismatch: got=%.12f\n", got); return 1; }
    }
    // Case 2: ascending_ordered_5
    {
        std::vector<double> xs = {0.5, 1.0, 1.5, 2.0, 2.5};
        double got = algo::transform_kernel(xs, 0.85);
        if (fabs(got - 2.2) > 1.0e-7) { fprintf(stderr, "case 2 float mismatch: got=%.12f\n", got); return 1; }
    }
    // Case 3: descending_ordered_6
    {
        std::vector<double> xs = {5.0, 4.25, 3.5, 2.75, 2.0, 1.25};
        double got = algo::transform_kernel(xs, 1.2);
        if (fabs(got - 1.25) > 1.0e-7) { fprintf(stderr, "case 3 float mismatch: got=%.12f\n", got); return 1; }
    }
    // Case 4: mixed_duplicates_7
    {
        std::vector<double> xs = {0.75, 2.0, 1.0, 2.25, 1.25, 0.25, 1.5};
        double got = algo::transform_kernel(xs, 0.15);
        if (fabs(got - 1.875) > 1.0e-7) { fprintf(stderr, "case 4 float mismatch: got=%.12f\n", got); return 1; }
    }
    // Case 5: uniform_distribution_4
    {
        std::vector<double> xs = {0.25, 0.25, 0.25, 0.25};
        double got = algo::transform_kernel(xs, 0.65);
        if (fabs(got - 0.25) > 1.0e-7) { fprintf(stderr, "case 5 float mismatch: got=%.12f\n", got); return 1; }
    }
    // Case 6: pseudo_random_prime_11
    {
        std::vector<double> xs = {3.6, 2.4, 1.2, 3.8, 2.6, 1.4, 0.2, 2.8, 1.6, 0.4, 3.0};
        double got = algo::transform_kernel(xs, 0.35);
        if (fabs(got - 3.2) > 1.0e-7) { fprintf(stderr, "case 6 float mismatch: got=%.12f\n", got); return 1; }
    }
    std::printf("[cpp20] PASS (%d vectors)\n", 7);
    return 0;
}
