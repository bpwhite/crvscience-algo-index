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

#![forbid(unsafe_code)]
#[path = "algo.rs"]
mod algo;

fn main() {
    // Case 0: singleton_unit
    {
        let got = algo::sample(0.25, 0.5);
        assert_eq!(got, 0i64, "case 0 failed");
    }
    // Case 1: ascending_ordered_5
    {
        let got = algo::sample(0.5, 0.85);
        assert_eq!(got, 1i64, "case 1 failed");
    }
    // Case 2: descending_ordered_6
    {
        let got = algo::sample(0.85, 1.2);
        assert_eq!(got, 48i64, "case 2 failed");
    }
    // Case 3: mixed_duplicates_7
    {
        let got = algo::sample(1.2, 0.15);
        assert_eq!(got, 0i64, "case 3 failed");
    }
    // Case 4: uniform_distribution_4
    {
        let got = algo::sample(0.15, 0.65);
        assert_eq!(got, 0i64, "case 4 failed");
    }
    // Case 5: pseudo_random_prime_11
    {
        let got = algo::sample(0.65, 0.35);
        assert_eq!(got, 0i64, "case 5 failed");
    }
    println!("[rust] PASS (6 vectors)");
}
