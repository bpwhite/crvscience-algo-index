// SPDX-License-Identifier: GPL-3.0-only
#![forbid(unsafe_code)]
#[path = "algo.rs"]
mod algo;

fn main() {
    // Case 0: empty_boundary
    {
        let xs: Vec<f64> = vec![];
        let ys: Vec<f64> = vec![];
        let got = algo::infer_kernel(&xs, &ys);
        assert!((got - 0.0).abs() <= 1.0e-7, "case 0 float mismatch: got={got}");
    }
    // Case 1: singleton_unit
    {
        let xs: Vec<f64> = vec![1.0];
        let ys: Vec<f64> = vec![1.0];
        let got = algo::infer_kernel(&xs, &ys);
        assert!((got - 0.0).abs() <= 1.0e-7, "case 1 float mismatch: got={got}");
    }
    // Case 2: ascending_ordered_5
    {
        let xs: Vec<f64> = vec![0.5, 1.0, 1.5, 2.0, 2.5];
        let ys: Vec<f64> = vec![0.75, 1.25, 1.75, 2.25, 2.75];
        let got = algo::infer_kernel(&xs, &ys);
        assert!((got - 3.5).abs() <= 1.0e-7, "case 2 float mismatch: got={got}");
    }
    // Case 3: descending_ordered_6
    {
        let xs: Vec<f64> = vec![5.0, 4.25, 3.5, 2.75, 2.0, 1.25];
        let ys: Vec<f64> = vec![5.0, 4.25, 3.5, 2.75, 2.0, 1.25];
        let got = algo::infer_kernel(&xs, &ys);
        assert!((got - 0.0).abs() <= 1.0e-7, "case 3 float mismatch: got={got}");
    }
    // Case 4: mixed_duplicates_7
    {
        let xs: Vec<f64> = vec![0.75, 2.0, 1.0, 2.25, 1.25, 0.25, 1.5];
        let ys: Vec<f64> = vec![1.5, 0.5, 1.75, 0.75, 2.0, 1.0, 2.25];
        let got = algo::infer_kernel(&xs, &ys);
        assert!((got - 4.84375).abs() <= 1.0e-7, "case 4 float mismatch: got={got}");
    }
    // Case 5: uniform_distribution_4
    {
        let xs: Vec<f64> = vec![0.25, 0.25, 0.25, 0.25];
        let ys: Vec<f64> = vec![0.25, 0.25, 0.25, 0.25];
        let got = algo::infer_kernel(&xs, &ys);
        assert!((got - 0.0).abs() <= 1.0e-7, "case 5 float mismatch: got={got}");
    }
    // Case 6: pseudo_random_prime_11
    {
        let xs: Vec<f64> = vec![3.6, 2.4, 1.2, 3.8, 2.6, 1.4, 0.2, 2.8, 1.6, 0.4, 3.0];
        let ys: Vec<f64> = vec![3.0, 1.8, 0.6, 3.2, 2.0, 0.8, 3.4, 2.2, 1.0, 3.6, 2.4];
        let got = algo::infer_kernel(&xs, &ys);
        assert!((got - 20.02).abs() <= 1.0e-7, "case 6 float mismatch: got={got}");
    }
    println!("[rust] PASS (7 vectors)");
}
