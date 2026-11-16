# `sample_e7c599`

- **License**: `GPL-3.0-or-later`
- **Information-Theoretic Category**: `transform/` — Applies deterministic numerical, algebraic, or dynamical operators across state spaces or time steps.
- **Canonical Signature**: `fn(a: f64, b: f64) -> i64`
- **Estimated Complexity**: Time `O(n)`, Space `O(1) auxiliary`
- **Verification Suite**: `6` shared input/output cases in [`vectors.json`](./vectors.json)

## Copy-Paste Implementation Files

| Language | Implementation File(s) | Entrypoint Symbol | Standalone Test Command |
| :--- | :--- | :--- | :--- |
| Rust (2021) | `rust/algo.rs` | `sample` | `make test-rust` |
| C (C11) | `c/algo.h`, `c/algo.c` | `sample` | `make test-c` |
| C++ (C++20) | `cpp/algo.hpp`, `cpp/algo.cpp` | `algo::sample` | `make test-cpp` |
| Java (17+) | `java/Algo.java` | `Algo.sample` | `make test-java` |
| JavaScript (ES2022) | `js/algo.mjs` | `sample` | `make test-js` |
| Python (3.10+) | `python/algo.py` | `sample` | `make test-python` |

## Build & Test All Installed Toolchains

```sh
make test
```
