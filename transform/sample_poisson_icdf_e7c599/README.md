# `sample_poisson_icdf_e7c599`

- **License**: `GPL-3.0-only`
- **Information-Theoretic Category**: `transform/` — Applies deterministic numerical, algebraic, or dynamical operators across state spaces or time steps.
- **Canonical Signature**: `fn(a: f64, b: f64) -> i64`
- **Estimated Complexity**: Time `O(n)`, Space `O(1) auxiliary`
- **Verification Suite**: `6` shared input/output cases in [`vectors.json`](./vectors.json)

## Description

Executes a deterministic parametric or inverse-CDF sampling kernel over scalar/array inputs.

## Pseudocode

```text
function sample_poisson_icdf(a: float, b: float) -> int:
  if (a <= 0.000000000001) then
    return 0
  end if
  v0 <- min(a, 45)
  v1 <- exp(-(v0))
  v2 <- v1
  if (b <= v2) then
    return 0
  end if
  for i in 1..=96 do
    v1 <- (v1 * (v0 / float(i)))
    v2 <- (v2 + v1)
    if (b <= v2) then
      return i
    end if
  end for
  return 96
```

## 3 Real-World Uses

1. Generating synthetic event counts or arrival times in Monte Carlo discrete-event simulations.
2. Demand, surge, and capacity stress-testing in logistics and infrastructure models.
3. Bootstrap resampling and uncertainty quantification in statistical pipelines.

## Copy-Paste Implementation Files

| Language | Implementation File(s) | Entrypoint Symbol | Standalone Test Command |
| :--- | :--- | :--- | :--- |
| Rust (2021) | `rust/algo.rs` | `sample_poisson_icdf` | `make test-rust` |
| C (C11) | `c/algo.h`, `c/algo.c` | `sample_poisson_icdf` | `make test-c` |
| C++ (C++20) | `cpp/algo.hpp`, `cpp/algo.cpp` | `algo::sample_poisson_icdf` | `make test-cpp` |
| Java (17+) | `java/Algo.java` | `Algo.samplePoissonIcdf` | `make test-java` |
| JavaScript (ES2022) | `js/algo.mjs` | `samplePoissonIcdf` | `make test-js` |
| Python (3.10+) | `python/algo.py` | `sample_poisson_icdf` | `make test-python` |

## Build & Test All Installed Toolchains

```sh
make test
```
