// SPDX-License-Identifier: GPL-3.0-only
#![forbid(unsafe_code)]
#[path = "algo.rs"]
mod algo;

fn main() {
    // Case 0: singleton_unit
    {
        let mut buf: Vec<i64> = vec![5];
        algo::encode_kernel(&mut buf, 5i64);
        assert_eq!(buf.len(), 1);
        assert_eq!(buf[0], 37i64);
    }
    // Case 1: ascending_ordered_5
    {
        let mut buf: Vec<i64> = vec![1, 3, 5, 7, 9];
        algo::encode_kernel(&mut buf, 9i64);
        assert_eq!(buf.len(), 5);
        assert_eq!(buf[0], 1i64);
        assert_eq!(buf[1], 3i64);
        assert_eq!(buf[2], 5i64);
        assert_eq!(buf[3], 7i64);
        assert_eq!(buf[4], 9i64);
    }
    // Case 2: descending_ordered_6
    {
        let mut buf: Vec<i64> = vec![17, 14, 11, 8, 5, 2];
        algo::encode_kernel(&mut buf, 4i64);
        assert_eq!(buf.len(), 6);
        assert_eq!(buf[0], 17i64);
        assert_eq!(buf[1], 14i64);
        assert_eq!(buf[2], 11i64);
        assert_eq!(buf[3], 8i64);
        assert_eq!(buf[4], 5i64);
        assert_eq!(buf[5], 2i64);
    }
    // Case 3: mixed_duplicates_7
    {
        let mut buf: Vec<i64> = vec![4, 1, 4, 9, 2, 9, 5];
        algo::encode_kernel(&mut buf, 7i64);
        assert_eq!(buf.len(), 7);
        assert_eq!(buf[0], 132i64);
        assert_eq!(buf[1], 1i64);
        assert_eq!(buf[2], 4i64);
        assert_eq!(buf[3], 9i64);
        assert_eq!(buf[4], 2i64);
        assert_eq!(buf[5], 9i64);
        assert_eq!(buf[6], 5i64);
    }
    // Case 4: uniform_distribution_4
    {
        let mut buf: Vec<i64> = vec![3, 3, 3, 3];
        algo::encode_kernel(&mut buf, 12i64);
        assert_eq!(buf.len(), 4);
        assert_eq!(buf[0], 3i64);
        assert_eq!(buf[1], 19i64);
        assert_eq!(buf[2], 3i64);
        assert_eq!(buf[3], 3i64);
    }
    // Case 5: pseudo_random_prime_11
    {
        let mut buf: Vec<i64> = vec![24, 12, 29, 17, 5, 22, 10, 27, 15, 3, 20];
        algo::encode_kernel(&mut buf, 3i64);
        assert_eq!(buf.len(), 11);
        assert_eq!(buf[0], 24i64);
        assert_eq!(buf[1], 12i64);
        assert_eq!(buf[2], 29i64);
        assert_eq!(buf[3], 17i64);
        assert_eq!(buf[4], 5i64);
        assert_eq!(buf[5], 22i64);
        assert_eq!(buf[6], 10i64);
        assert_eq!(buf[7], 27i64);
        assert_eq!(buf[8], 15i64);
        assert_eq!(buf[9], 3i64);
        assert_eq!(buf[10], 20i64);
    }
    println!("[rust] PASS (6 vectors)");
}
