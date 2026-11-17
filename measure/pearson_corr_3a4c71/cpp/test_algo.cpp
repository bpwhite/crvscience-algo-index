// SPDX-License-Identifier: GPL-3.0-only
#include "algo.hpp"
#include <cmath>
#include <cstdio>
#include <vector>

int main() {
    // Case 0: empty_boundary
    {
        std::vector<double> xs = {};
        std::vector<double> ys = {};
        double got = algo::pearson_corr(xs, ys);
        if (fabs(got - 0.0) > 1.0e-7) { fprintf(stderr, "case 0 float mismatch: got=%.12f\n", got); return 1; }
    }
    // Case 1: singleton_unit
    {
        std::vector<double> xs = {1.0};
        std::vector<double> ys = {1.0};
        double got = algo::pearson_corr(xs, ys);
        if (fabs(got - 0.0) > 1.0e-7) { fprintf(stderr, "case 1 float mismatch: got=%.12f\n", got); return 1; }
    }
    // Case 2: ascending_ordered_5
    {
        std::vector<double> xs = {0.066667, 0.133333, 0.2, 0.266667, 0.333333};
        std::vector<double> ys = {0.085714, 0.142857, 0.2, 0.257143, 0.314286};
        double got = algo::pearson_corr(xs, ys);
        if (fabs(got - 0.999999999995) > 1.0e-7) { fprintf(stderr, "case 2 float mismatch: got=%.12f\n", got); return 1; }
    }
    // Case 3: descending_ordered_6
    {
        std::vector<double> xs = {0.266667, 0.226667, 0.186667, 0.146667, 0.106667, 0.066667};
        std::vector<double> ys = {0.266667, 0.226667, 0.186667, 0.146667, 0.106667, 0.066667};
        double got = algo::pearson_corr(xs, ys);
        if (fabs(got - 1.0) > 1.0e-7) { fprintf(stderr, "case 3 float mismatch: got=%.12f\n", got); return 1; }
    }
    // Case 4: mixed_duplicates_7
    {
        std::vector<double> xs = {0.083333, 0.222222, 0.111111, 0.25, 0.138889, 0.027778, 0.166667};
        std::vector<double> ys = {0.153846, 0.051282, 0.179487, 0.076923, 0.205128, 0.102564, 0.230769};
        double got = algo::pearson_corr(xs, ys);
        if (fabs(got - -0.306968360001) > 1.0e-7) { fprintf(stderr, "case 4 float mismatch: got=%.12f\n", got); return 1; }
    }
    // Case 5: uniform_distribution_4
    {
        std::vector<double> xs = {0.25, 0.25, 0.25, 0.25};
        std::vector<double> ys = {0.25, 0.25, 0.25, 0.25};
        double got = algo::pearson_corr(xs, ys);
        if (fabs(got - 0.0) > 1.0e-7) { fprintf(stderr, "case 5 float mismatch: got=%.12f\n", got); return 1; }
    }
    // Case 6: pseudo_random_prime_11
    {
        std::vector<double> xs = {0.156522, 0.104348, 0.052174, 0.165217, 0.113043, 0.06087, 0.008696, 0.121739, 0.069565, 0.017391, 0.130435};
        std::vector<double> ys = {0.125, 0.075, 0.025, 0.133333, 0.083333, 0.033333, 0.141667, 0.091667, 0.041667, 0.15, 0.1};
        double got = algo::pearson_corr(xs, ys);
        if (fabs(got - 0.094368743893) > 1.0e-7) { fprintf(stderr, "case 6 float mismatch: got=%.12f\n", got); return 1; }
    }
    std::printf("[cpp20] PASS (%d vectors)\n", 7);
    return 0;
}
