# `pearson_corr_3a4c71`

- **License**: `GPL-3.0-only`
- **Information-Theoretic Category**: `measure/` — Compresses one or more high-dimensional structures into a scalar metric, divergence, or entropy summary.
- **Canonical Signature**: `fn(xs: &[f64], ys: &[f64]) -> f64`
- **Estimated Complexity**: Time `O(n)`, Space `O(1) auxiliary`
- **Verification Suite**: `7` shared input/output cases in [`vectors.json`](./vectors.json)

## Description

Computes a scalar similarity, correlation, or distance metric across paired numeric series.

## Pseudocode

```text
function pearson_corr(xs: []float, ys: []float) -> float:
  v0 <- min(len(xs), len(ys))
  if (v0 < 3) then
    return 0
  end if
  __sum_acc_1 <- 0
  for i in 0..v0 do
    __sum_acc_1 <- (__sum_acc_1 + xs[i])
  end for
  v2 <- (__sum_acc_1 / float(v0))
  __sum_acc_3 <- 0
  for j in 0..v0 do
    __sum_acc_3 <- (__sum_acc_3 + ys[j])
  end for
  v4 <- (__sum_acc_3 / float(v0))
  v5 <- 0
  v6 <- 0
  v7 <- 0
  for t in 0..v0 do
    v8 <- (xs[t] - v2)
    v9 <- (ys[t] - v4)
    v5 <- (v5 + (v8 * v9))
    v6 <- (v6 + (v8 * v8))
    v7 <- (v7 + (v9 * v9))
  end for
  v10 <- sqrt((v6 * v7))
  if (v10 > 0.000000001) then
    return min(max((v5 / v10), -(1)), 1)
  else
    return 0
  end if
```

## 3 Real-World Uses

1. Ranking candidate molecular, spectral, or signal profiles against a query signature.
2. Cross-correlating time-series sensor streams for fault detection and alignment.
3. Clustering and nearest-neighbor retrieval in high-dimensional feature vectors.

## Copy-Paste Implementation Files

| Language | Implementation File(s) | Entrypoint Symbol | Standalone Test Command |
| :--- | :--- | :--- | :--- |
| Rust (2021) | `rust/algo.rs` | `pearson_corr` | `make test-rust` |
| C (C11) | `c/algo.h`, `c/algo.c` | `pearson_corr` | `make test-c` |
| C++ (C++20) | `cpp/algo.hpp`, `cpp/algo.cpp` | `algo::pearson_corr` | `make test-cpp` |
| Java (17+) | `java/Algo.java` | `Algo.pearsonCorr` | `make test-java` |
| JavaScript (ES2022) | `js/algo.mjs` | `pearsonCorr` | `make test-js` |
| Python (3.10+) | `python/algo.py` | `pearson_corr` | `make test-python` |

## Build & Test All Installed Toolchains

```sh
make test
```
