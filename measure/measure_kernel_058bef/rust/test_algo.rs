// SPDX-License-Identifier: GPL-3.0-only
#![forbid(unsafe_code)]
#[path = "algo.rs"]
mod algo;

fn main() {
    // Case 0: empty_boundary
    {
        let xs: Vec<f64> = vec![];
        let got = algo::measure_kernel(&xs, 0.85);
        assert!((got - 0.0).abs() <= 1.0e-7, "case 0 float mismatch: got={got}");
    }
    // Case 1: singleton_unit
    {
        let xs: Vec<f64> = vec![1.0];
        let got = algo::measure_kernel(&xs, 0.5);
        assert!((got - 1.0).abs() <= 1.0e-7, "case 1 float mismatch: got={got}");
    }
    // Case 2: ascending_ordered_5
    {
        let xs: Vec<f64> = vec![0.066667, 0.133333, 0.2, 0.266667, 0.333333];
        let got = algo::measure_kernel(&xs, 0.85);
        assert!((got - 0.194778204306).abs() <= 1.0e-7, "case 2 float mismatch: got={got}");
    }
    // Case 3: descending_ordered_6
    {
        let xs: Vec<f64> = vec![0.266667, 0.226667, 0.186667, 0.146667, 0.106667, 0.066667];
        let got = algo::measure_kernel(&xs, 1.2);
        assert!((got - 0.164723221285).abs() <= 1.0e-7, "case 3 float mismatch: got={got}");
    }
    // Case 4: mixed_duplicates_7
    {
        let xs: Vec<f64> = vec![0.083333, 0.222222, 0.111111, 0.25, 0.138889, 0.027778, 0.166667];
        let got = algo::measure_kernel(&xs, 0.15);
        assert!((got - 0.125949170869).abs() <= 1.0e-7, "case 4 float mismatch: got={got}");
    }
    // Case 5: uniform_distribution_4
    {
        let xs: Vec<f64> = vec![0.25, 0.25, 0.25, 0.25];
        let got = algo::measure_kernel(&xs, 0.65);
        assert!((got - 0.25).abs() <= 1.0e-7, "case 5 float mismatch: got={got}");
    }
    // Case 6: pseudo_random_prime_11
    {
        let xs: Vec<f64> = vec![0.156522, 0.104348, 0.052174, 0.165217, 0.113043, 0.06087, 0.008696, 0.121739, 0.069565, 0.017391, 0.130435];
        let got = algo::measure_kernel(&xs, 0.35);
        assert!((got - 0.087245058938).abs() <= 1.0e-7, "case 6 float mismatch: got={got}");
    }
    println!("[rust] PASS (7 vectors)");
}
