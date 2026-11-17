# `probit_norm_cdf_a2610d`

- **License**: `GPL-3.0-only`
- **Information-Theoretic Category**: `transform/` — Applies deterministic numerical, algebraic, or dynamical operators across state spaces or time steps.
- **Canonical Signature**: `fn(a: f64) -> f64`
- **Estimated Complexity**: Time `O(1)`, Space `O(1) auxiliary`
- **Verification Suite**: `6` shared input/output cases in [`vectors.json`](./vectors.json)

## Description

Nonlinear transcendental transformation kernel (fn(a: f64) -> f64) computing smooth activation, decay, or likelihood curves.

## Pseudocode

```text
function probit_norm_cdf(a: float) -> float:
  v0 <- 0
  if (a < 0) then
    v0 <- -(1)
  else
    v0 <- 1
  end if
  v1 <- (abs(a) / 1.4142135623730951)
  v2 <- (1 / (1 + (0.3275911 * v1)))
  v3 <- (1 - ((((((((((1.061405429 * v2) - 1.453152027) * v2) + 1.421413741) * v2) - 0.284496736) * v2) + 0.254829592) * v2) * exp((-(v1) * v1))))
  return (0.5 * (1 + (v0 * v3)))
```

## 3 Real-World Uses

1. Logistic/sigmoid probability mapping and log-sum-exp stabilization in statistical and ML inference.
2. Physical decay, diffusion, and reaction-kinetics modeling in scientific computing.
3. Dynamic range compression and gain control in audio and sensor signal processing.

## Copy-Paste Implementation Files

| Language | Implementation File(s) | Entrypoint Symbol | Standalone Test Command |
| :--- | :--- | :--- | :--- |
| Rust (2021) | `rust/algo.rs` | `probit_norm_cdf` | `make test-rust` |
| C (C11) | `c/algo.h`, `c/algo.c` | `probit_norm_cdf` | `make test-c` |
| C++ (C++20) | `cpp/algo.hpp`, `cpp/algo.cpp` | `algo::probit_norm_cdf` | `make test-cpp` |
| Java (17+) | `java/Algo.java` | `Algo.probitNormCdf` | `make test-java` |
| JavaScript (ES2022) | `js/algo.mjs` | `probitNormCdf` | `make test-js` |
| Python (3.10+) | `python/algo.py` | `probit_norm_cdf` | `make test-python` |

## Build & Test All Installed Toolchains

```sh
make test
```
