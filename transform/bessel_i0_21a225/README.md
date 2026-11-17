# `bessel_i0_21a225`

- **License**: `GPL-3.0-only`
- **Information-Theoretic Category**: `transform/` — Applies deterministic numerical, algebraic, or dynamical operators across state spaces or time steps.
- **Canonical Signature**: `fn(a: f64) -> f64`
- **Estimated Complexity**: Time `O(n)`, Space `O(1) auxiliary`
- **Verification Suite**: `6` shared input/output cases in [`vectors.json`](./vectors.json)

## Description

Pure deterministic transformation kernel (fn(a: f64) -> f64) with O(n) time complexity.

## Pseudocode

```text
function bessel_i0(a: float) -> float:
  v0 <- 1
  v1 <- 1
  v2 <- ((0.25 * a) * a)
  for i in 1..28 do
    v1 <- (v1 * (v2 / float((i * i))))
    v0 <- (v0 + v1)
    if (v1 < (0.00000000000001 * v0)) then
      break
    end if
  end for
  return v0
```

## 3 Real-World Uses

1. Evaluating closed-form physical, financial, or engineering transfer functions.
2. Deterministic data normalization, clamping, and piecewise interpolation across pipelines.
3. Cross-language reference verification for safety-critical numeric kernels.

## Copy-Paste Implementation Files

| Language | Implementation File(s) | Entrypoint Symbol | Standalone Test Command |
| :--- | :--- | :--- | :--- |
| Rust (2021) | `rust/algo.rs` | `bessel_i0` | `make test-rust` |
| C (C11) | `c/algo.h`, `c/algo.c` | `bessel_i0` | `make test-c` |
| C++ (C++20) | `cpp/algo.hpp`, `cpp/algo.cpp` | `algo::bessel_i0` | `make test-cpp` |
| Java (17+) | `java/Algo.java` | `Algo.besselI0` | `make test-java` |
| JavaScript (ES2022) | `js/algo.mjs` | `besselI0` | `make test-js` |
| Python (3.10+) | `python/algo.py` | `bessel_i0` | `make test-python` |

## Build & Test All Installed Toolchains

```sh
make test
```
