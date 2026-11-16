// SPDX-License-Identifier: GPL-3.0-only
#![forbid(unsafe_code)]
#[path = "algo.rs"]
mod algo;

fn main() {
    // Case 0: ascending_ordered_5
    {
        let xs: Vec<f64> = vec![0.066667, 0.133333, 0.2, 0.266667, 0.333333];
        let ys: Vec<f64> = vec![0.085714, 0.142857, 0.2, 0.257143, 0.314286];
        let got = algo::kl(&xs, &ys);
        assert!((got - -0.023450739855).abs() <= 1.0e-7, "case 0 float mismatch: got={got}");
    }
    // Case 1: descending_ordered_6
    {
        let xs: Vec<f64> = vec![0.266667, 0.226667, 0.186667, 0.146667, 0.106667, 0.066667];
        let ys: Vec<f64> = vec![0.266667, 0.226667, 0.186667, 0.146667, 0.106667, 0.066667];
        let got = algo::kl(&xs, &ys);
        assert!((got - 0.0).abs() <= 1.0e-7, "case 1 float mismatch: got={got}");
    }
    // Case 2: mixed_duplicates_7
    {
        let xs: Vec<f64> = vec![0.083333, 0.222222, 0.111111, 0.25, 0.138889, 0.027778, 0.166667];
        let ys: Vec<f64> = vec![0.153846, 0.051282, 0.179487, 0.076923, 0.205128, 0.102564, 0.230769];
        let got = algo::kl(&xs, &ys);
        assert!((got - 0.744630347065).abs() <= 1.0e-7, "case 2 float mismatch: got={got}");
    }
    // Case 3: uniform_distribution_4
    {
        let xs: Vec<f64> = vec![0.25, 0.25, 0.25, 0.25];
        let ys: Vec<f64> = vec![0.25, 0.25, 0.25, 0.25];
        let got = algo::kl(&xs, &ys);
        assert!((got - 0.0).abs() <= 1.0e-7, "case 3 float mismatch: got={got}");
    }
    // Case 4: pseudo_random_prime_11
    {
        let xs: Vec<f64> = vec![0.156522, 0.104348, 0.052174, 0.165217, 0.113043, 0.06087, 0.008696, 0.121739, 0.069565, 0.017391, 0.130435];
        let ys: Vec<f64> = vec![0.125, 0.075, 0.025, 0.133333, 0.083333, 0.033333, 0.141667, 0.091667, 0.041667, 0.15, 0.1];
        let got = algo::kl(&xs, &ys);
        assert!((got - 0.206981114199).abs() <= 1.0e-7, "case 4 float mismatch: got={got}");
    }
    println!("[rust] PASS (5 vectors)");
}
