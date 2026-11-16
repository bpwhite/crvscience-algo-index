// SPDX-License-Identifier: GPL-3.0-only
#![forbid(unsafe_code)]
#[path = "algo.rs"]
mod algo;

fn main() {
    // Case 0: singleton_unit
    {
        let got = algo::transform_kernel(0.25, 0.5, 0.85);
        assert!((got - 20.807210873631).abs() <= 1.0e-7, "case 0 float mismatch: got={got}");
    }
    // Case 1: ascending_ordered_5
    {
        let got = algo::transform_kernel(0.5, 0.85, 1.2);
        assert!((got - 18.13708866001).abs() <= 1.0e-7, "case 1 float mismatch: got={got}");
    }
    // Case 2: descending_ordered_6
    {
        let got = algo::transform_kernel(0.85, 1.2, 0.15);
        assert!((got - 31.960977671339).abs() <= 1.0e-7, "case 2 float mismatch: got={got}");
    }
    // Case 3: mixed_duplicates_7
    {
        let got = algo::transform_kernel(1.2, 0.15, 0.65);
        assert!((got - 16.784177098499).abs() <= 1.0e-7, "case 3 float mismatch: got={got}");
    }
    // Case 4: uniform_distribution_4
    {
        let got = algo::transform_kernel(0.15, 0.65, 0.35);
        assert!((got - 47.30635589562).abs() <= 1.0e-7, "case 4 float mismatch: got={got}");
    }
    // Case 5: pseudo_random_prime_11
    {
        let got = algo::transform_kernel(0.65, 0.35, 0.25);
        assert!((got - 32.870423297252).abs() <= 1.0e-7, "case 5 float mismatch: got={got}");
    }
    println!("[rust] PASS (6 vectors)");
}
