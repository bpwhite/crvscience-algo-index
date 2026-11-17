// SPDX-License-Identifier: GPL-3.0-only
#![forbid(unsafe_code)]
#[path = "algo.rs"]
mod algo;

fn main() {
    // Case 0: empty_boundary
    {
        let xs: Vec<i64> = vec![];
        let got = algo::shannon_entropy_bits(&xs);
        assert!((got - 0.0).abs() <= 1.0e-7, "case 0 float mismatch: got={got}");
    }
    // Case 1: singleton_unit
    {
        let xs: Vec<i64> = vec![5];
        let got = algo::shannon_entropy_bits(&xs);
        assert!((got - 0.0).abs() <= 1.0e-7, "case 1 float mismatch: got={got}");
    }
    // Case 2: ascending_ordered_5
    {
        let xs: Vec<i64> = vec![1, 3, 5, 7, 9];
        let got = algo::shannon_entropy_bits(&xs);
        assert!((got - 2.062042692015).abs() <= 1.0e-7, "case 2 float mismatch: got={got}");
    }
    // Case 3: descending_ordered_6
    {
        let xs: Vec<i64> = vec![17, 14, 11, 8, 5, 2];
        let got = algo::shannon_entropy_bits(&xs);
        assert!((got - 2.351254479261).abs() <= 1.0e-7, "case 3 float mismatch: got={got}");
    }
    // Case 4: mixed_duplicates_7
    {
        let xs: Vec<i64> = vec![4, 1, 4, 9, 2, 9, 5];
        let got = algo::shannon_entropy_bits(&xs);
        assert!((got - 2.538395473592).abs() <= 1.0e-7, "case 4 float mismatch: got={got}");
    }
    // Case 5: uniform_distribution_4
    {
        let xs: Vec<i64> = vec![3, 3, 3, 3];
        let got = algo::shannon_entropy_bits(&xs);
        assert!((got - 2.0).abs() <= 1.0e-7, "case 5 float mismatch: got={got}");
    }
    // Case 6: pseudo_random_prime_11
    {
        let xs: Vec<i64> = vec![24, 12, 29, 17, 5, 22, 10, 27, 15, 3, 20];
        let got = algo::shannon_entropy_bits(&xs);
        assert!((got - 3.259745895667).abs() <= 1.0e-7, "case 6 float mismatch: got={got}");
    }
    println!("[rust] PASS (7 vectors)");
}
