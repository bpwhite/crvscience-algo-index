// SPDX-License-Identifier: GPL-3.0-only
#![forbid(unsafe_code)]
#[path = "algo.rs"]
mod algo;

fn main() {
    // Case 0: singleton_unit
    {
        let got = algo::equivalent_potential_temp(0.25, 0.5, 0.85);
        assert!((got - 1909.622642717178).abs() <= 1.0e-7, "case 0 float mismatch: got={got}");
    }
    // Case 1: ascending_ordered_5
    {
        let got = algo::equivalent_potential_temp(0.5, 0.85, 1.2);
        assert!((got - 1891.157969899553).abs() <= 1.0e-7, "case 1 float mismatch: got={got}");
    }
    // Case 2: descending_ordered_6
    {
        let got = algo::equivalent_potential_temp(0.85, 1.2, 0.15);
        assert!((got - 2017.31939216512).abs() <= 1.0e-7, "case 2 float mismatch: got={got}");
    }
    // Case 3: mixed_duplicates_7
    {
        let got = algo::equivalent_potential_temp(1.2, 0.15, 0.65);
        assert!((got - 1933.009282206801).abs() <= 1.0e-7, "case 3 float mismatch: got={got}");
    }
    // Case 4: uniform_distribution_4
    {
        let got = algo::equivalent_potential_temp(0.15, 0.65, 0.35);
        assert!((got - 1961.364431006174).abs() <= 1.0e-7, "case 4 float mismatch: got={got}");
    }
    // Case 5: pseudo_random_prime_11
    {
        let got = algo::equivalent_potential_temp(0.65, 0.35, 0.25);
        assert!((got - 1985.350175610173).abs() <= 1.0e-7, "case 5 float mismatch: got={got}");
    }
    println!("[rust] PASS (6 vectors)");
}
