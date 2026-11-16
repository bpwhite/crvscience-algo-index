# `project_kernel_bf2c3c`

- **License**: `GPL-3.0-or-later`
- **Information-Theoretic Category**: `project/` — Expands compact geometric or parametric seeds into spatial coordinates, raster cells, or quasi-random sequences.
- **Canonical Signature**: `fn(k: i64, a: f64, m: i64) -> f64`
- **Estimated Complexity**: Time `O(n^2)`, Space `O(1) auxiliary`
- **Verification Suite**: `6` shared input/output cases in [`vectors.json`](./vectors.json)

## Copy-Paste Implementation Files

| Language | Implementation File(s) | Entrypoint Symbol | Standalone Test Command |
| :--- | :--- | :--- | :--- |
| Rust (2021) | `rust/algo.rs` | `project_kernel` | `make test-rust` |
| C (C11) | `c/algo.h`, `c/algo.c` | `project_kernel` | `make test-c` |
| C++ (C++20) | `cpp/algo.hpp`, `cpp/algo.cpp` | `algo::project_kernel` | `make test-cpp` |
| Java (17+) | `java/Algo.java` | `Algo.projectKernel` | `make test-java` |
| JavaScript (ES2022) | `js/algo.mjs` | `projectKernel` | `make test-js` |
| Python (3.10+) | `python/algo.py` | `project_kernel` | `make test-python` |

## Build & Test All Installed Toolchains

```sh
make test
```
