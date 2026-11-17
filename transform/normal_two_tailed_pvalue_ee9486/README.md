# `normal_two_tailed_pvalue_ee9486`

- **License**: `GPL-3.0-only`
- **Information-Theoretic Category**: `transform/` — Applies deterministic numerical, algebraic, or dynamical operators across state spaces or time steps.
- **Canonical Signature**: `fn(a: f64) -> f64`
- **Estimated Complexity**: Time `O(1)`, Space `O(1) auxiliary`
- **Verification Suite**: `6` shared input/output cases in [`vectors.json`](./vectors.json)

## Description

Nonlinear transcendental transformation kernel (fn(a: f64) -> f64) computing smooth activation, decay, or likelihood curves.

## Pseudocode

```text
function normal_two_tailed_pvalue(a: float) -> float:
  v0 <- (abs(a) / 1.4142135623730951)
  v1 <- (1 / (1 + (0.3275911 * v0)))
  v2 <- (v1 * (0.254829592 + (v1 * (-(0.284496736) + (v1 * (1.421413741 + (v1 * (-(1.453152027) + (v1 * 1.061405429)))))))))
  v3 <- (v2 * exp((-(v0) * v0)))
  return min(max(v3, 0), 1)
```

## 3 Real-World Uses

1. Logistic/sigmoid probability mapping and log-sum-exp stabilization in statistical and ML inference.
2. Physical decay, diffusion, and reaction-kinetics modeling in scientific computing.
3. Dynamic range compression and gain control in audio and sensor signal processing.

## Copy-Paste Implementation Files

| Language | Implementation File(s) | Entrypoint Symbol | Standalone Test Command |
| :--- | :--- | :--- | :--- |
| Rust (2021) | `rust/algo.rs` | `normal_two_tailed_pvalue` | `make test-rust` |
| C (C11) | `c/algo.h`, `c/algo.c` | `normal_two_tailed_pvalue` | `make test-c` |
| C++ (C++20) | `cpp/algo.hpp`, `cpp/algo.cpp` | `algo::normal_two_tailed_pvalue` | `make test-cpp` |
| Java (17+) | `java/Algo.java` | `Algo.normalTwoTailedPvalue` | `make test-java` |
| JavaScript (ES2022) | `js/algo.mjs` | `normalTwoTailedPvalue` | `make test-js` |
| Python (3.10+) | `python/algo.py` | `normal_two_tailed_pvalue` | `make test-python` |

## Build & Test All Installed Toolchains

```sh
make test
```
