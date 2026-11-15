# Polyglot Algorithm Catalog (GPL-3.0-only)

Self-contained, zero-dependency reference implementations in **Rust, C (C11), C++ (C++20), Java (17+), JavaScript (ES2022), and Python (3.10+)**, harvested exclusively from **GNU GPL v3** sources, organized along an information-theoretic taxonomy, and verified against shared input/output test vectors (`vectors.json`).

- **License**: GNU General Public License v3.0 (`SPDX-License-Identifier: GPL-3.0-only`)

## Information-Theoretic Directory Structure

| Folder | Role | Entropy & State Transformation |
| :--- | :--- | :--- |
| `select/` | Select (Search, Filter & Index) | Isolates a low-entropy target index or subset via query conditioning (H(Y) << H(X)) without mutating source symbols. |
| `order/` | Order (Sort, Rank & Partition) | Collapses permutation entropy (n! states to 1 canonical ordering) while preserving marginal symbol multisets. |
| `measure/` | Measure (Compare, Distance & Entropy) | Compresses one or more high-dimensional structures into a scalar metric, divergence, or entropy summary. |
| `encode/` | Encode (Hash, Compress & Channel Code) | Transforms symbol representations toward source entropy bounds, channel redundancy, or uniform hash diffusion. |
| `transform/` | Transform (Calculate, Integrate & Convolve) | Applies deterministic numerical, algebraic, or dynamical operators across state spaces or time steps. |
| `infer/` | Infer (Fit, Cluster & Estimate) | Extracts low-dimensional latent parameters or summary statistics maximizing mutual information I(X; Z). |
| `project/` | Project (Render, Rasterize & Sample) | Expands compact geometric or parametric seeds into spatial coordinates, raster cells, or quasi-random sequences. |

## Verified Algorithms

_No algorithms exported yet. Run `harvester ingest <gpl3-repo-url>` from the private builder._
