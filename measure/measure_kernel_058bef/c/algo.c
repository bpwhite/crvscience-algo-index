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
#include <stdlib.h>

static inline int64_t algo_min_i64(int64_t a, int64_t b) { return a < b ? a : b; }
static inline int64_t algo_max_i64(int64_t a, int64_t b) { return a > b ? a : b; }

double measure_kernel(const double *xs, size_t xs_len, double a) {
    (void)xs_len;
    if (((((int64_t)xs_len)) == (INT64_C(0)))) {
        return 0.0;
    }
    double v0 = ((1.0) / (fmax(a, 0.000001)));
    double v1 = -1000000000000000052504760255204420248704468581108159154915854115511802457988908195786371375080447864043704443832883878176942523235360430575644792184786706982848387200926575803737830233794788090059368953234970799945081119038967640880074652742780142494579258788820056842838115669472196386865459400540160.0;
    for (int64_t i = (INT64_C(0)); i < (((int64_t)xs_len)); ++i) {
        double v2 = xs[(size_t)(i)];
        double v3 = (((-(v2))) * (v0));
        if (((v3) > (v1))) {
            v1 = v3;
        }
    }
    double v4 = 0.0;
    for (int64_t j = (INT64_C(0)); j < (((int64_t)xs_len)); ++j) {
        double v5 = xs[(size_t)(j)];
        v4 = ((v4) + (exp((((((-(v5))) * (v0))) - (v1)))));
    }
    double v6 = ((v1) + (log(((v4) / (((double)(((int64_t)xs_len))))))));
    return (((-(a))) * (v6));
}
