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
    // Case 0: empty_boundary
    {
        let xs: Vec<f64> = vec![];
        let ys: Vec<f64> = vec![];
        let got = algo::similarity(&xs, &ys);
        assert!((got - 0.0).abs() <= 1.0e-7, "case 0 float mismatch: got={got}");
    }
    // Case 1: singleton_unit
    {
        let xs: Vec<f64> = vec![1.0];
        let ys: Vec<f64> = vec![1.0];
        let got = algo::similarity(&xs, &ys);
        assert!((got - 1.0).abs() <= 1.0e-7, "case 1 float mismatch: got={got}");
    }
    // Case 2: ascending_ordered_5
    {
        let xs: Vec<f64> = vec![0.066667, 0.133333, 0.2, 0.266667, 0.333333];
        let ys: Vec<f64> = vec![0.085714, 0.142857, 0.2, 0.257143, 0.314286];
        let got = algo::similarity(&xs, &ys);
        assert!((got - 0.988700732548).abs() <= 1.0e-7, "case 2 float mismatch: got={got}");
    }
    // Case 3: descending_ordered_6
    {
        let xs: Vec<f64> = vec![0.266667, 0.226667, 0.186667, 0.146667, 0.106667, 0.066667];
        let ys: Vec<f64> = vec![0.266667, 0.226667, 0.186667, 0.146667, 0.106667, 0.066667];
        let got = algo::similarity(&xs, &ys);
        assert!((got - 1.0).abs() <= 1.0e-7, "case 3 float mismatch: got={got}");
    }
    // Case 4: mixed_duplicates_7
    {
        let xs: Vec<f64> = vec![0.083333, 0.222222, 0.111111, 0.25, 0.138889, 0.027778, 0.166667];
        let ys: Vec<f64> = vec![0.153846, 0.051282, 0.179487, 0.076923, 0.205128, 0.102564, 0.230769];
        let got = algo::similarity(&xs, &ys);
        assert!((got - 0.910505977277).abs() <= 1.0e-7, "case 4 float mismatch: got={got}");
    }
    // Case 5: uniform_distribution_4
    {
        let xs: Vec<f64> = vec![0.25, 0.25, 0.25, 0.25];
        let ys: Vec<f64> = vec![0.25, 0.25, 0.25, 0.25];
        let got = algo::similarity(&xs, &ys);
        assert!((got - 1.0).abs() <= 1.0e-7, "case 5 float mismatch: got={got}");
    }
    // Case 6: pseudo_random_prime_11
    {
        let xs: Vec<f64> = vec![0.156522, 0.104348, 0.052174, 0.165217, 0.113043, 0.06087, 0.008696, 0.121739, 0.069565, 0.017391, 0.130435];
        let ys: Vec<f64> = vec![0.125, 0.075, 0.025, 0.133333, 0.083333, 0.033333, 0.141667, 0.091667, 0.041667, 0.15, 0.1];
        let got = algo::similarity(&xs, &ys);
        assert!((got - 0.953936984657).abs() <= 1.0e-7, "case 6 float mismatch: got={got}");
    }
    println!("[rust] PASS (7 vectors)");
}
