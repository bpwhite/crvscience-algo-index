# Polyglot Algorithm Catalog (GPL-3.0-or-later)

Self-contained, zero-dependency reference implementations in **Rust, C (C11), C++ (C++20), Java (17+), JavaScript (ES2022), and Python (3.10+)**, harvested exclusively from **GNU GPL v3** sources, organized along an information-theoretic taxonomy, and verified against shared input/output test vectors (`vectors.json`).

- **License**: GNU General Public License v3.0 (`SPDX-License-Identifier: GPL-3.0-or-later`)
- **Source & Citation**: [CRV Science Apps](https://crvscience.com/apps) (`https://crvscience.com/apps`)

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

| Category | Algorithm | Canonical Signature | Time Complexity | Path |
| :--- | :--- | :--- | :--- | :--- |
| `encode` | `encode_kernel_2360ec` | `fn(buf: &mut [i64], k: i64) -> ()` | `O(1)` | [`encode/encode_kernel_2360ec`](./encode/encode_kernel_2360ec/README.md) |
| `encode` | `encode_kernel_3c73f6` | `fn(k: i64, m: i64, q: i64, p: i64) -> i64` | `O(1)` | [`encode/encode_kernel_3c73f6`](./encode/encode_kernel_3c73f6/README.md) |
| `encode` | `encode_kernel_7c0c26` | `fn(k: i64, m: i64, q: i64) -> i64` | `O(1)` | [`encode/encode_kernel_7c0c26`](./encode/encode_kernel_7c0c26/README.md) |
| `encode` | `encode_kernel_b4829f` | `fn(buf: &mut [i64], k: i64) -> ()` | `O(1)` | [`encode/encode_kernel_b4829f`](./encode/encode_kernel_b4829f/README.md) |
| `encode` | `encode_kernel_cada2d` | `fn(xs: &[i64], k: i64) -> i64` | `O(1)` | [`encode/encode_kernel_cada2d`](./encode/encode_kernel_cada2d/README.md) |
| `encode` | `encode_kernel_fc4ed5` | `fn(k: i64, m: i64, q: i64) -> bool` | `O(1)` | [`encode/encode_kernel_fc4ed5`](./encode/encode_kernel_fc4ed5/README.md) |
| `infer` | `infer_kernel_d62cfe` | `fn(xs: &[f64], ys: &[f64]) -> f64` | `O(n)` | [`infer/infer_kernel_d62cfe`](./infer/infer_kernel_d62cfe/README.md) |
| `infer` | `infer_kernel_fe85ee` | `fn(xs: &[f64]) -> f64` | `O(n)` | [`infer/infer_kernel_fe85ee`](./infer/infer_kernel_fe85ee/README.md) |
| `infer` | `similarity_0515e4` | `fn(xs: &[f64], ys: &[f64]) -> f64` | `O(n)` | [`infer/similarity_0515e4`](./infer/similarity_0515e4/README.md) |
| `measure` | `measure_kernel_058bef` | `fn(xs: &[f64], a: f64) -> f64` | `O(n)` | [`measure/measure_kernel_058bef`](./measure/measure_kernel_058bef/README.md) |
| `project` | `project_kernel_bf2c3c` | `fn(k: i64, a: f64, m: i64) -> f64` | `O(n^2)` | [`project/project_kernel_bf2c3c`](./project/project_kernel_bf2c3c/README.md) |
| `transform` | `binary_entropy_422d08` | `fn(a: f64) -> f64` | `O(1)` | [`transform/binary_entropy_422d08`](./transform/binary_entropy_422d08/README.md) |
| `transform` | `kl_eaaab1` | `fn(xs: &[f64], ys: &[f64]) -> f64` | `O(n)` | [`transform/kl_eaaab1`](./transform/kl_eaaab1/README.md) |
| `transform` | `sample_21e941` | `fn(a: f64, b: f64) -> i64` | `O(n)` | [`transform/sample_21e941`](./transform/sample_21e941/README.md) |
| `transform` | `sample_e7c599` | `fn(a: f64, b: f64) -> i64` | `O(n)` | [`transform/sample_e7c599`](./transform/sample_e7c599/README.md) |
| `transform` | `shannon_entropy_4caa92` | `fn(xs: &[i64]) -> f64` | `O(n)` | [`transform/shannon_entropy_4caa92`](./transform/shannon_entropy_4caa92/README.md) |
| `transform` | `transform_kernel_00e218` | `fn(xs: &[f64], a: f64) -> f64` | `O(1)` | [`transform/transform_kernel_00e218`](./transform/transform_kernel_00e218/README.md) |
| `transform` | `transform_kernel_0198b8` | `fn(a: f64, b: f64, c: f64, d: f64, a4: f64, a5: f64, a6: f64) -> f64` | `O(1)` | [`transform/transform_kernel_0198b8`](./transform/transform_kernel_0198b8/README.md) |
| `transform` | `transform_kernel_06fe1d` | `fn(a: f64, b: f64, c: f64, d: f64, a4: f64) -> f64` | `O(1)` | [`transform/transform_kernel_06fe1d`](./transform/transform_kernel_06fe1d/README.md) |
| `transform` | `transform_kernel_0fb260` | `fn(k: i64, a: f64, m: i64) -> f64` | `O(1)` | [`transform/transform_kernel_0fb260`](./transform/transform_kernel_0fb260/README.md) |
| `transform` | `transform_kernel_148c19` | `fn(a: f64) -> f64` | `O(1)` | [`transform/transform_kernel_148c19`](./transform/transform_kernel_148c19/README.md) |
| `transform` | `transform_kernel_19274d` | `fn(a: f64) -> f64` | `O(1)` | [`transform/transform_kernel_19274d`](./transform/transform_kernel_19274d/README.md) |
| `transform` | `transform_kernel_204748` | `fn(a: f64) -> f64` | `O(1)` | [`transform/transform_kernel_204748`](./transform/transform_kernel_204748/README.md) |
| `transform` | `transform_kernel_206ed1` | `fn(flag0: bool, a: f64, b: f64, c: f64) -> f64` | `O(1)` | [`transform/transform_kernel_206ed1`](./transform/transform_kernel_206ed1/README.md) |
| `transform` | `transform_kernel_21a225` | `fn(a: f64) -> f64` | `O(n)` | [`transform/transform_kernel_21a225`](./transform/transform_kernel_21a225/README.md) |
| `transform` | `transform_kernel_2a42e5` | `fn(a: f64, b: f64) -> f64` | `O(1)` | [`transform/transform_kernel_2a42e5`](./transform/transform_kernel_2a42e5/README.md) |
| `transform` | `transform_kernel_2dfbfc` | `fn(a: f64, b: f64) -> f64` | `O(1)` | [`transform/transform_kernel_2dfbfc`](./transform/transform_kernel_2dfbfc/README.md) |
| `transform` | `transform_kernel_348de4` | `fn(a: f64) -> f64` | `O(1)` | [`transform/transform_kernel_348de4`](./transform/transform_kernel_348de4/README.md) |
| `transform` | `transform_kernel_3a740f` | `fn(a: f64) -> f64` | `O(1)` | [`transform/transform_kernel_3a740f`](./transform/transform_kernel_3a740f/README.md) |
| `transform` | `transform_kernel_3e4fc2` | `fn(a: f64) -> f64` | `O(n)` | [`transform/transform_kernel_3e4fc2`](./transform/transform_kernel_3e4fc2/README.md) |
| `transform` | `transform_kernel_404a45` | `fn(a: f64, b: f64, c: f64, d: f64) -> f64` | `O(1)` | [`transform/transform_kernel_404a45`](./transform/transform_kernel_404a45/README.md) |
| `transform` | `transform_kernel_4228b9` | `fn(a: f64, b: f64, c: f64, d: f64) -> f64` | `O(1)` | [`transform/transform_kernel_4228b9`](./transform/transform_kernel_4228b9/README.md) |
| `transform` | `transform_kernel_4b331b` | `fn(a: f64, b: f64, c: f64) -> f64` | `O(1)` | [`transform/transform_kernel_4b331b`](./transform/transform_kernel_4b331b/README.md) |
| `transform` | `transform_kernel_4dd3a7` | `fn(a: f64) -> f64` | `O(1)` | [`transform/transform_kernel_4dd3a7`](./transform/transform_kernel_4dd3a7/README.md) |
| `transform` | `transform_kernel_5682e7` | `fn(k: i64, m: i64, q: i64, p: i64) -> f64` | `O(1)` | [`transform/transform_kernel_5682e7`](./transform/transform_kernel_5682e7/README.md) |
| `transform` | `transform_kernel_60e071` | `fn(a: f64, b: f64, c: f64) -> f64` | `O(1)` | [`transform/transform_kernel_60e071`](./transform/transform_kernel_60e071/README.md) |
| `transform` | `transform_kernel_7dd476` | `fn(a: f64) -> f64` | `O(1)` | [`transform/transform_kernel_7dd476`](./transform/transform_kernel_7dd476/README.md) |
| `transform` | `transform_kernel_7ed09f` | `fn(a: f64, b: f64, c: f64) -> f64` | `O(1)` | [`transform/transform_kernel_7ed09f`](./transform/transform_kernel_7ed09f/README.md) |
| `transform` | `transform_kernel_82ebee` | `fn(a: f64, b: f64, c: f64) -> f64` | `O(1)` | [`transform/transform_kernel_82ebee`](./transform/transform_kernel_82ebee/README.md) |
| `transform` | `transform_kernel_83db4a` | `fn(a: f64, b: f64) -> f64` | `O(1)` | [`transform/transform_kernel_83db4a`](./transform/transform_kernel_83db4a/README.md) |
| `transform` | `transform_kernel_8d21a8` | `fn(a: f64, b: f64, c: f64, d: f64) -> f64` | `O(1)` | [`transform/transform_kernel_8d21a8`](./transform/transform_kernel_8d21a8/README.md) |
| `transform` | `transform_kernel_8fc1ab` | `fn(a: f64, b: f64, c: f64) -> f64` | `O(1)` | [`transform/transform_kernel_8fc1ab`](./transform/transform_kernel_8fc1ab/README.md) |
| `transform` | `transform_kernel_ad0a52` | `fn(k: i64, m: i64, q: i64) -> f64` | `O(1)` | [`transform/transform_kernel_ad0a52`](./transform/transform_kernel_ad0a52/README.md) |
| `transform` | `transform_kernel_c7ad70` | `fn(a: f64) -> f64` | `O(1)` | [`transform/transform_kernel_c7ad70`](./transform/transform_kernel_c7ad70/README.md) |
| `transform` | `transform_kernel_c7d018` | `fn(k: i64, a: f64) -> f64` | `O(1)` | [`transform/transform_kernel_c7d018`](./transform/transform_kernel_c7d018/README.md) |
| `transform` | `transform_kernel_de3a96` | `fn(xs: &[f64], a: f64) -> f64` | `O(1)` | [`transform/transform_kernel_de3a96`](./transform/transform_kernel_de3a96/README.md) |
| `transform` | `transform_kernel_e7f214` | `fn(k: i64, a: f64) -> f64` | `O(1)` | [`transform/transform_kernel_e7f214`](./transform/transform_kernel_e7f214/README.md) |
| `transform` | `transform_kernel_ea4f33` | `fn(a: f64, b: f64, c: f64, d: f64, a4: f64, a5: f64) -> f64` | `O(1)` | [`transform/transform_kernel_ea4f33`](./transform/transform_kernel_ea4f33/README.md) |
| `transform` | `transform_kernel_eb3a6e` | `fn(a: f64) -> f64` | `O(1)` | [`transform/transform_kernel_eb3a6e`](./transform/transform_kernel_eb3a6e/README.md) |
| `transform` | `transform_kernel_ee9486` | `fn(a: f64) -> f64` | `O(1)` | [`transform/transform_kernel_ee9486`](./transform/transform_kernel_ee9486/README.md) |
| `transform` | `transform_kernel_f1ea2e` | `fn(k: i64) -> i64` | `O(n)` | [`transform/transform_kernel_f1ea2e`](./transform/transform_kernel_f1ea2e/README.md) |
| `transform` | `transform_kernel_f82f54` | `fn(a: f64, b: f64, c: f64) -> f64` | `O(1)` | [`transform/transform_kernel_f82f54`](./transform/transform_kernel_f82f54/README.md) |
| `transform` | `transform_kernel_fd4f9f` | `fn(a: f64) -> f64` | `O(1)` | [`transform/transform_kernel_fd4f9f`](./transform/transform_kernel_fd4f9f/README.md) |
| `transform` | `transform_kernel_ff16eb` | `fn(a: f64, b: f64, c: f64) -> f64` | `O(1)` | [`transform/transform_kernel_ff16eb`](./transform/transform_kernel_ff16eb/README.md) |

## Citation

If you reference or use algorithms from this index, please cite CRV Science Apps: <https://crvscience.com/apps>.
