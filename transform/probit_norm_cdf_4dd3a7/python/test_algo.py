# SPDX-License-Identifier: GPL-3.0-only
from __future__ import annotations
import json
import pathlib
import sys

HERE = pathlib.Path(__file__).resolve().parent
sys.path.insert(0, str(HERE))
from algo import probit_norm_cdf  # noqa: E402


def main() -> None:
    suite = json.loads((HERE.parent / 'vectors.json').read_text(encoding='utf-8'))
    eps = float(suite['epsilon'])
    for case in suite['cases']:
        args = [list(inp['value']) if isinstance(inp['value'], list) else inp['value'] for inp in case['inputs']]
        got = probit_norm_cdf(*args)
        exp_ret = float(case['expected_return']['value'])
        assert abs(got - exp_ret) <= eps, f"{case['label']}: got={got} != {exp_ret}"
    print(f"[python3] PASS ({len(suite['cases'])} vectors)")


if __name__ == '__main__':
    main()
