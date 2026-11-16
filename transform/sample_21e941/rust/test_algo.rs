// SPDX-License-Identifier: GPL-3.0-only
#![forbid(unsafe_code)]
#[path = "algo.rs"]
mod algo;

fn main() {
    // Case 0: singleton_unit
    {
        let got = algo::sample(0.25, 0.5);
        assert_eq!(got, 0i64, "case 0 failed");
    }
    // Case 1: ascending_ordered_5
    {
        let got = algo::sample(0.5, 0.85);
        assert_eq!(got, 1i64, "case 1 failed");
    }
    // Case 2: descending_ordered_6
    {
        let got = algo::sample(0.85, 1.2);
        assert_eq!(got, 48i64, "case 2 failed");
    }
    // Case 3: mixed_duplicates_7
    {
        let got = algo::sample(1.2, 0.15);
        assert_eq!(got, 0i64, "case 3 failed");
    }
    // Case 4: uniform_distribution_4
    {
        let got = algo::sample(0.15, 0.65);
        assert_eq!(got, 0i64, "case 4 failed");
    }
    // Case 5: pseudo_random_prime_11
    {
        let got = algo::sample(0.65, 0.35);
        assert_eq!(got, 0i64, "case 5 failed");
    }
    println!("[rust] PASS (6 vectors)");
}
