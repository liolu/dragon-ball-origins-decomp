# Dragon Ball Origins decompilation (EU)

<!-- bytematch:start -->
[![Code](https://bytematch.dev/liolu/dragon-ball-origins-decomp.svg?label=Code&measure=matched_code_percent)](https://bytematch.dev/liolu/dragon-ball-origins-decomp) [![Data](https://bytematch.dev/liolu/dragon-ball-origins-decomp.svg?label=Data&measure=matched_data_percent)](https://bytematch.dev/liolu/dragon-ball-origins-decomp) [![Functions](https://bytematch.dev/liolu/dragon-ball-origins-decomp.svg?label=Functions&measure=matched_functions)](https://bytematch.dev/liolu/dragon-ball-origins-decomp)
<!-- bytematch:end -->

Nintendo DS, game code `CDZP`. Matching decompilation with Metrowerks mwccarm (compiler version still to be identified: `python tools/probe_compiler.py`).

No game assets in this repository: see `extract/README.md`.

## Progress

<!-- progress:start -->
`████░░░░░░░░░░░░░░░░` **20.93%** of the code matched · data 0.00% · 3052/5119 functions

| Part of the code | Files | Functions | Share of all code |
|---|---|---|---|
| Auto-matched (raw m2c output, to clean up) | 2946 | 2946/2946 | 19.20% |
| Reused from other decompilations, not merged into files yet | 106 | 106/106 | 1.73% |

*Updated 2026-10-25 by `python tools/match.py progress` ([DS Decomp Studio](https://github.com/liolu/ds-decomp-studio)). A function counts only when it compiles to the exact same bytes and the ROM still rebuilds byte for byte.*
<!-- progress:end -->

```shell
python tools/configure.py eu
ninja
python tools/match.py status
```

Created from the rayman-rr template. See `AGENTS.md` for the rules.
