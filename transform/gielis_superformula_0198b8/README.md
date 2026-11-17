# `gielis_superformula_0198b8`

- **License**: `GPL-3.0-only`
- **Information-Theoretic Category**: `transform/` — Applies deterministic numerical, algebraic, or dynamical operators across state spaces or time steps.
- **Canonical Signature**: `fn(a: f64, b: f64, c: f64, d: f64, a4: f64, a5: f64, a6: f64) -> f64`
- **Estimated Complexity**: Time `O(1)`, Space `O(1) auxiliary`
- **Verification Suite**: `6` shared input/output cases in [`vectors.json`](./vectors.json)

## Description

Trigonometric/periodic transformation kernel (fn(a: f64, b: f64, c: f64, d: f64, a4: f64, a5: f64, a6: f64) -> f64) evaluating smooth angular or wave functions.

## Pseudocode

```text
function gielis_superformula(a: float, b: float, c: float, d: float, a4: float, a5: float, a6: float) -> float:
  v0 <- pow(abs((cos(((b * a) * 0.25)) / c)), a5)
  v1 <- pow(abs((sin(((b * a) * 0.25)) / d)), a6)
  v2 <- max((v0 + v1), 0.000000001)
  return pow(v2, (-(1) / max(a4, 0.1)))
```

## 3 Real-World Uses

1. Parametric shape synthesis, polar curve evaluation, and CAD/3D mesh generation.
2. Geospatial bearing, great-circle, and orbital phase calculations.
3. Harmonic analysis and phase-locked signal processing in DSP pipelines.

## Copy-Paste Implementation Files

| Language | Implementation File(s) | Entrypoint Symbol | Standalone Test Command |
| :--- | :--- | :--- | :--- |
| Rust (2021) | `rust/algo.rs` | `gielis_superformula` | `make test-rust` |
| C (C11) | `c/algo.h`, `c/algo.c` | `gielis_superformula` | `make test-c` |
| C++ (C++20) | `cpp/algo.hpp`, `cpp/algo.cpp` | `algo::gielis_superformula` | `make test-cpp` |
| Java (17+) | `java/Algo.java` | `Algo.gielisSuperformula` | `make test-java` |
| JavaScript (ES2022) | `js/algo.mjs` | `gielisSuperformula` | `make test-js` |
| Python (3.10+) | `python/algo.py` | `gielis_superformula` | `make test-python` |

## Build & Test All Installed Toolchains

```sh
make test
```
