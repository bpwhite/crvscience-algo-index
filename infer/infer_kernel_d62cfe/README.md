# `infer_kernel_d62cfe`

- **License**: `GPL-3.0-or-later`
- **Information-Theoretic Category**: `infer/` — Extracts low-dimensional latent parameters or summary statistics maximizing mutual information I(X; Z).
- **Canonical Signature**: `fn(xs: &[f64], ys: &[f64]) -> f64`
- **Estimated Complexity**: Time `O(n)`, Space `O(1) auxiliary`
- **Verification Suite**: `7` shared input/output cases in [`vectors.json`](./vectors.json)

## Copy-Paste Implementation Files

| Language | Implementation File(s) | Entrypoint Symbol | Standalone Test Command |
| :--- | :--- | :--- | :--- |
| Rust (2021) | `rust/algo.rs` | `infer_kernel` | `make test-rust` |
| C (C11) | `c/algo.h`, `c/algo.c` | `infer_kernel` | `make test-c` |
| C++ (C++20) | `cpp/algo.hpp`, `cpp/algo.cpp` | `algo::infer_kernel` | `make test-cpp` |
| Java (17+) | `java/Algo.java` | `Algo.inferKernel` | `make test-java` |
| JavaScript (ES2022) | `js/algo.mjs` | `inferKernel` | `make test-js` |
| Python (3.10+) | `python/algo.py` | `infer_kernel` | `make test-python` |

## Build & Test All Installed Toolchains

```sh
make test
```
