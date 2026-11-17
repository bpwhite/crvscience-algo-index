# `measure_kernel_3a4c71`

- **License**: `GPL-3.0-only`
- **Information-Theoretic Category**: `measure/` — Compresses one or more high-dimensional structures into a scalar metric, divergence, or entropy summary.
- **Canonical Signature**: `fn(xs: &[f64], ys: &[f64]) -> f64`
- **Estimated Complexity**: Time `O(n)`, Space `O(1) auxiliary`
- **Verification Suite**: `7` shared input/output cases in [`vectors.json`](./vectors.json)

## Description

Computes a scalar similarity, correlation, or distance metric across paired numeric series.

## 3 Real-World Uses

1. Ranking candidate molecular, spectral, or signal profiles against a query signature.
2. Cross-correlating time-series sensor streams for fault detection and alignment.
3. Clustering and nearest-neighbor retrieval in high-dimensional feature vectors.

## Copy-Paste Implementation Files

| Language | Implementation File(s) | Entrypoint Symbol | Standalone Test Command |
| :--- | :--- | :--- | :--- |
| Rust (2021) | `rust/algo.rs` | `measure_kernel` | `make test-rust` |
| C (C11) | `c/algo.h`, `c/algo.c` | `measure_kernel` | `make test-c` |
| C++ (C++20) | `cpp/algo.hpp`, `cpp/algo.cpp` | `algo::measure_kernel` | `make test-cpp` |
| Java (17+) | `java/Algo.java` | `Algo.measureKernel` | `make test-java` |
| JavaScript (ES2022) | `js/algo.mjs` | `measureKernel` | `make test-js` |
| Python (3.10+) | `python/algo.py` | `measure_kernel` | `make test-python` |

## Build & Test All Installed Toolchains

```sh
make test
```
