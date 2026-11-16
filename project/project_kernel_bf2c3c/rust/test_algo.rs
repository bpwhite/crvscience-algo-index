// SPDX-License-Identifier: GPL-3.0-only
#![forbid(unsafe_code)]
#[path = "algo.rs"]
mod algo;

fn main() {
    // Case 0: singleton_unit
    {
        let got = algo::project_kernel(2i64, 0.5, 9i64);
        assert!((got - 0.05).abs() <= 1.0e-7, "case 0 float mismatch: got={got}");
    }
    // Case 1: ascending_ordered_5
    {
        let got = algo::project_kernel(5i64, 0.85, 4i64);
        assert!((got - 0.295002111109).abs() <= 1.0e-7, "case 1 float mismatch: got={got}");
    }
    // Case 2: descending_ordered_6
    {
        let got = algo::project_kernel(9i64, 1.2, 7i64);
        assert!((got - 0.145811095701).abs() <= 1.0e-7, "case 2 float mismatch: got={got}");
    }
    // Case 3: mixed_duplicates_7
    {
        let got = algo::project_kernel(4i64, 0.15, 12i64);
        assert!((got - 0.05).abs() <= 1.0e-7, "case 3 float mismatch: got={got}");
    }
    // Case 4: uniform_distribution_4
    {
        let got = algo::project_kernel(7i64, 0.65, 3i64);
        assert!((got - 0.624858671293).abs() <= 1.0e-7, "case 4 float mismatch: got={got}");
    }
    // Case 5: pseudo_random_prime_11
    {
        let got = algo::project_kernel(12i64, 0.35, 2i64);
        assert!((got - 0.974365889415).abs() <= 1.0e-7, "case 5 float mismatch: got={got}");
    }
    println!("[rust] PASS (6 vectors)");
}
