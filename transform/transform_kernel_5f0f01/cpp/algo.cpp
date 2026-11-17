// SPDX-License-Identifier: GPL-3.0-only
#include "algo.hpp"
#include <cmath>
#include <cstdlib>

namespace {
inline int64_t algo_min_i64(int64_t a, int64_t b) { return a < b ? a : b; }
inline int64_t algo_max_i64(int64_t a, int64_t b) { return a > b ? a : b; }
} // namespace

namespace algo {
int64_t transform_kernel(std::span<const double> xs, double a) {
    (void)algo_min_i64;
    (void)algo_max_i64;
    int64_t v0 = INT64_C(0);
    double v1 = 1000000000000000052504760255204420248704468581108159154915854115511802457988908195786371375080447864043704443832883878176942523235360430575644792184786706982848387200926575803737830233794788090059368953234970799945081119038967640880074652742780142494579258788820056842838115669472196386865459400540160.0;
    for (int64_t i = (INT64_C(0)); i < (static_cast<int64_t>(xs.size())); ++i) {
        double v2 = xs[(size_t)(i)];
        double v3 = fabs(((v2) - (a)));
        if (((v3) < (v1))) {
            v1 = v3;
            v0 = i;
        }
    }
    return v0;
}
} // namespace algo
