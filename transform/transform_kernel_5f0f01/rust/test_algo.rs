// SPDX-License-Identifier: GPL-3.0-only
#![forbid(unsafe_code)]
#[path = "algo.rs"]
mod algo;

fn main() {
    // Case 0: empty_boundary
    {
        let xs: Vec<f64> = vec![];
        let got = algo::transform_kernel(&xs, 0.85);
        assert_eq!(got, 0i64, "case 0 failed");
    }
    // Case 1: singleton_unit
    {
        let xs: Vec<f64> = vec![1.0];
        let got = algo::transform_kernel(&xs, 0.5);
        assert_eq!(got, 0i64, "case 1 failed");
    }
    // Case 2: ascending_ordered_5
    {
        let xs: Vec<f64> = vec![0.5, 1.0, 1.5, 2.0, 2.5];
        let got = algo::transform_kernel(&xs, 0.85);
        assert_eq!(got, 1i64, "case 2 failed");
    }
    // Case 3: descending_ordered_6
    {
        let xs: Vec<f64> = vec![5.0, 4.25, 3.5, 2.75, 2.0, 1.25];
        let got = algo::transform_kernel(&xs, 1.2);
        assert_eq!(got, 5i64, "case 3 failed");
    }
    // Case 4: mixed_duplicates_7
    {
        let xs: Vec<f64> = vec![0.75, 2.0, 1.0, 2.25, 1.25, 0.25, 1.5];
        let got = algo::transform_kernel(&xs, 0.15);
        assert_eq!(got, 5i64, "case 4 failed");
    }
    // Case 5: uniform_distribution_4
    {
        let xs: Vec<f64> = vec![0.25, 0.25, 0.25, 0.25];
        let got = algo::transform_kernel(&xs, 0.65);
        assert_eq!(got, 0i64, "case 5 failed");
    }
    // Case 6: pseudo_random_prime_11
    {
        let xs: Vec<f64> = vec![3.6, 2.4, 1.2, 3.8, 2.6, 1.4, 0.2, 2.8, 1.6, 0.4, 3.0];
        let got = algo::transform_kernel(&xs, 0.35);
        assert_eq!(got, 9i64, "case 6 failed");
    }
    println!("[rust] PASS (7 vectors)");
}
