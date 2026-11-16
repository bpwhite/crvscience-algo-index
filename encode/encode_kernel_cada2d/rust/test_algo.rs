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
        let xs: Vec<i64> = vec![5];
        let got = algo::encode_kernel(&xs, 5i64);
        assert_eq!(got, 0i64, "case 0 failed");
    }
    // Case 1: ascending_ordered_5
    {
        let xs: Vec<i64> = vec![1, 3, 5, 7, 9];
        let got = algo::encode_kernel(&xs, 9i64);
        assert_eq!(got, 1i64, "case 1 failed");
    }
    // Case 2: descending_ordered_6
    {
        let xs: Vec<i64> = vec![17, 14, 11, 8, 5, 2];
        let got = algo::encode_kernel(&xs, 4i64);
        assert_eq!(got, 1i64, "case 2 failed");
    }
    // Case 3: mixed_duplicates_7
    {
        let xs: Vec<i64> = vec![4, 1, 4, 9, 2, 9, 5];
        let got = algo::encode_kernel(&xs, 7i64);
        assert_eq!(got, 0i64, "case 3 failed");
    }
    // Case 4: uniform_distribution_4
    {
        let xs: Vec<i64> = vec![3, 3, 3, 3];
        let got = algo::encode_kernel(&xs, 12i64);
        assert_eq!(got, 0i64, "case 4 failed");
    }
    // Case 5: pseudo_random_prime_11
    {
        let xs: Vec<i64> = vec![24, 12, 29, 17, 5, 22, 10, 27, 15, 3, 20];
        let got = algo::encode_kernel(&xs, 3i64);
        assert_eq!(got, 1i64, "case 5 failed");
    }
    println!("[rust] PASS (6 vectors)");
}
