# `transform_kernel_ff16eb`

- **License**: `GPL-3.0-or-later`
- **Information-Theoretic Category**: `transform/` — Applies deterministic numerical, algebraic, or dynamical operators across state spaces or time steps.
- **Canonical Signature**: `fn(a: f64, b: f64, c: f64) -> f64`
- **Estimated Complexity**: Time `O(1)`, Space `O(1) auxiliary`
- **Verification Suite**: `6` shared input/output cases in [`vectors.json`](./vectors.json)

## Copy-Paste Implementation Files

| Language | Implementation File(s) | Entrypoint Symbol | Standalone Test Command |
| :--- | :--- | :--- | :--- |
| Rust (2021) | `rust/algo.rs` | `transform_kernel` | `make test-rust` |
| C (C11) | `c/algo.h`, `c/algo.c` | `transform_kernel` | `make test-c` |
| C++ (C++20) | `cpp/algo.hpp`, `cpp/algo.cpp` | `algo::transform_kernel` | `make test-cpp` |
| Java (17+) | `java/Algo.java` | `Algo.transformKernel` | `make test-java` |
| JavaScript (ES2022) | `js/algo.mjs` | `transformKernel` | `make test-js` |
| Python (3.10+) | `python/algo.py` | `transform_kernel` | `make test-python` |

## Build & Test All Installed Toolchains

```sh
make test
```
