// SPDX-License-Identifier: GPL-3.0-only
#![forbid(unsafe_code)]
#[path = "algo.rs"]
mod algo;

fn main() {
    // Case 0: singleton_unit
    {
        let got = algo::transform_kernel(2i64);
        assert_eq!(got, 3i64, "case 0 failed");
    }
    // Case 1: ascending_ordered_5
    {
        let got = algo::transform_kernel(5i64);
        assert_eq!(got, 3i64, "case 1 failed");
    }
    // Case 2: descending_ordered_6
    {
        let got = algo::transform_kernel(9i64);
        assert_eq!(got, 3i64, "case 2 failed");
    }
    // Case 3: mixed_duplicates_7
    {
        let got = algo::transform_kernel(4i64);
        assert_eq!(got, 3i64, "case 3 failed");
    }
    // Case 4: uniform_distribution_4
    {
        let got = algo::transform_kernel(7i64);
        assert_eq!(got, 3i64, "case 4 failed");
    }
    // Case 5: pseudo_random_prime_11
    {
        let got = algo::transform_kernel(12i64);
        assert_eq!(got, 3i64, "case 5 failed");
    }
    println!("[rust] PASS (6 vectors)");
}
