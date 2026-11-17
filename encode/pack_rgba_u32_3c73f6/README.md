# `pack_rgba_u32_3c73f6`

- **License**: `GPL-3.0-only`
- **Information-Theoretic Category**: `encode/` — Transforms symbol representations toward source entropy bounds, channel redundancy, or uniform hash diffusion.
- **Canonical Signature**: `fn(k: i64, m: i64, q: i64, p: i64) -> i64`
- **Estimated Complexity**: Time `O(1)`, Space `O(1) auxiliary`
- **Verification Suite**: `6` shared input/output cases in [`vectors.json`](./vectors.json)

## Description

Deterministic bit-level encoding, packing, or flag-manipulation kernel (fn(k: i64, m: i64, q: i64, p: i64) -> i64) over integer words or buffers.

## Pseudocode

```text
function pack_rgba_u32(k: int, m: int, q: int, p: int) -> int:
  return (((k | (m << 8)) | (q << 16)) | (p << 24))
```

## 3 Real-World Uses

1. Compact bitset indexing and flag storage in high-throughput parsers and state engines.
2. Packing multi-channel color, coordinate, or protocol fields into fixed-width integer words.
3. Fast bitwise membership testing in Bloom filters and hardware-friendly lookup tables.

## Copy-Paste Implementation Files

| Language | Implementation File(s) | Entrypoint Symbol | Standalone Test Command |
| :--- | :--- | :--- | :--- |
| Rust (2021) | `rust/algo.rs` | `pack_rgba_u32` | `make test-rust` |
| C (C11) | `c/algo.h`, `c/algo.c` | `pack_rgba_u32` | `make test-c` |
| C++ (C++20) | `cpp/algo.hpp`, `cpp/algo.cpp` | `algo::pack_rgba_u32` | `make test-cpp` |
| Java (17+) | `java/Algo.java` | `Algo.packRgbaU32` | `make test-java` |
| JavaScript (ES2022) | `js/algo.mjs` | `packRgbaU32` | `make test-js` |
| Python (3.10+) | `python/algo.py` | `pack_rgba_u32` | `make test-python` |

## Build & Test All Installed Toolchains

```sh
make test
```
