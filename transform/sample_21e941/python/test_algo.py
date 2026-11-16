# SPDX-License-Identifier: GPL-3.0-or-later
# Copyright (C) 2026 CRV Science Network (https://crvscience.com)
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <https://gnu.org>.

from __future__ import annotations
import json
import pathlib
import sys

HERE = pathlib.Path(__file__).resolve().parent
sys.path.insert(0, str(HERE))
from algo import sample  # noqa: E402


def main() -> None:
    suite = json.loads((HERE.parent / 'vectors.json').read_text(encoding='utf-8'))
    eps = float(suite['epsilon'])
    for case in suite['cases']:
        args = [list(inp['value']) if isinstance(inp['value'], list) else inp['value'] for inp in case['inputs']]
        got = sample(*args)
        exp_ret = case['expected_return']['value']
        assert got == exp_ret, f"{case['label']}: got={got} != {exp_ret}"
    print(f"[python3] PASS ({len(suite['cases'])} vectors)")


if __name__ == '__main__':
    main()
