# `sorted_quantile_00e218`

- **License**: `GPL-3.0-only`
- **Information-Theoretic Category**: `transform/` — Applies deterministic numerical, algebraic, or dynamical operators across state spaces or time steps.
- **Canonical Signature**: `fn(xs: &[f64], a: f64) -> f64`
- **Estimated Complexity**: Time `O(1)`, Space `O(1) auxiliary`
- **Verification Suite**: `7` shared input/output cases in [`vectors.json`](./vectors.json)

## Description

Pure deterministic transformation kernel (fn(xs: &[f64], a: f64) -> f64) with O(1) time complexity.

## Pseudocode

```text
function sorted_quantile(xs: []float, a: float) -> float:
  if (len(xs) == 0) then
    return 0
  end if
  v0 <- (min(max(a, 0), 1) * float((len(xs) - 1)))
  v1 <- int(floor(v0))
  v2 <- int(ceil(v0))
  v3 <- (v0 - float(v1))
  return ((xs[v1] * (1 - v3)) + (xs[v2] * v3))
```

## 3 Real-World Uses

1. Evaluating closed-form physical, financial, or engineering transfer functions.
2. Deterministic data normalization, clamping, and piecewise interpolation across pipelines.
3. Cross-language reference verification for safety-critical numeric kernels.

## Copy-Paste Implementation Files

| Language | Implementation File(s) | Entrypoint Symbol | Standalone Test Command |
| :--- | :--- | :--- | :--- |
| Rust (2021) | `rust/algo.rs` | `sorted_quantile` | `make test-rust` |
| C (C11) | `c/algo.h`, `c/algo.c` | `sorted_quantile` | `make test-c` |
| C++ (C++20) | `cpp/algo.hpp`, `cpp/algo.cpp` | `algo::sorted_quantile` | `make test-cpp` |
| Java (17+) | `java/Algo.java` | `Algo.sortedQuantile` | `make test-java` |
| JavaScript (ES2022) | `js/algo.mjs` | `sortedQuantile` | `make test-js` |
| Python (3.10+) | `python/algo.py` | `sorted_quantile` | `make test-python` |

## Build & Test All Installed Toolchains

```sh
make test
```
