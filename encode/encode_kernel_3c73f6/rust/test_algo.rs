// SPDX-License-Identifier: GPL-3.0-only
#![forbid(unsafe_code)]
#[path = "algo.rs"]
mod algo;

fn main() {
    // Case 0: singleton_unit
    {
        let got = algo::encode_kernel(2i64, 5i64, 9i64, 4i64);
        assert_eq!(got, 67699970i64, "case 0 failed");
    }
    // Case 1: ascending_ordered_5
    {
        let got = algo::encode_kernel(5i64, 9i64, 4i64, 7i64);
        assert_eq!(got, 117704965i64, "case 1 failed");
    }
    // Case 2: descending_ordered_6
    {
        let got = algo::encode_kernel(9i64, 4i64, 7i64, 12i64);
        assert_eq!(got, 201786377i64, "case 2 failed");
    }
    // Case 3: mixed_duplicates_7
    {
        let got = algo::encode_kernel(4i64, 7i64, 12i64, 3i64);
        assert_eq!(got, 51119876i64, "case 3 failed");
    }
    // Case 4: uniform_distribution_4
    {
        let got = algo::encode_kernel(7i64, 12i64, 3i64, 2i64);
        assert_eq!(got, 33754119i64, "case 4 failed");
    }
    // Case 5: pseudo_random_prime_11
    {
        let got = algo::encode_kernel(12i64, 3i64, 2i64, 5i64);
        assert_eq!(got, 84017932i64, "case 5 failed");
    }
    println!("[rust] PASS (6 vectors)");
}
