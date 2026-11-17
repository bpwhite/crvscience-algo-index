# `migration_fraction_e7f214`

- **License**: `GPL-3.0-only`
- **Information-Theoretic Category**: `transform/` — Applies deterministic numerical, algebraic, or dynamical operators across state spaces or time steps.
- **Canonical Signature**: `fn(k: i64, a: f64) -> f64`
- **Estimated Complexity**: Time `O(1)`, Space `O(1) auxiliary`
- **Verification Suite**: `6` shared input/output cases in [`vectors.json`](./vectors.json)

## Description

Nonlinear transcendental transformation kernel (fn(k: i64, a: f64) -> f64) computing smooth activation, decay, or likelihood curves.

## Pseudocode

```text
function migration_fraction(k: int, a: float) -> float:
  v0 <- min(max(a, 0.5), 3)
  v1 <- (ln(float(max(k, 40))) / 2.302585092994046)
  v2 <- max((4.35 - (0.28 * (v0 - 1))), 3.4)
  v3 <- max((1.75 - (0.15 * (v0 - 1))), 1.3)
  v4 <- ((v2 - v1) / (v2 - v3))
  return min(max(v4, 0.03), 0.96)
```

## 3 Real-World Uses

1. Logistic/sigmoid probability mapping and log-sum-exp stabilization in statistical and ML inference.
2. Physical decay, diffusion, and reaction-kinetics modeling in scientific computing.
3. Dynamic range compression and gain control in audio and sensor signal processing.

## Copy-Paste Implementation Files

| Language | Implementation File(s) | Entrypoint Symbol | Standalone Test Command |
| :--- | :--- | :--- | :--- |
| Rust (2021) | `rust/algo.rs` | `migration_fraction` | `make test-rust` |
| C (C11) | `c/algo.h`, `c/algo.c` | `migration_fraction` | `make test-c` |
| C++ (C++20) | `cpp/algo.hpp`, `cpp/algo.cpp` | `algo::migration_fraction` | `make test-cpp` |
| Java (17+) | `java/Algo.java` | `Algo.migrationFraction` | `make test-java` |
| JavaScript (ES2022) | `js/algo.mjs` | `migrationFraction` | `make test-js` |
| Python (3.10+) | `python/algo.py` | `migration_fraction` | `make test-python` |

## Build & Test All Installed Toolchains

```sh
make test
```
