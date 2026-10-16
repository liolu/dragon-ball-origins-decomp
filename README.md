# Dragon Ball Origins decompilation (EU)

Nintendo DS, game code `CDZP`. Matching decompilation with Metrowerks mwccarm (compiler version still to be identified: `python tools/probe_compiler.py`).

No game assets in this repository: see `extract/README.md`.

## Progress

<!-- progress:start -->
`████░░░░░░░░░░░░░░░░` **18.75%** of the code matched · data 0.00% · 2925/5119 functions

| Part of the code | Files | Functions | Share of all code |
|---|---|---|---|
| Auto-matched (raw m2c output, to clean up) | 2877 | 2877/2877 | 18.27% |
| Reused from other decompilations, not merged into files yet | 48 | 48/48 | 0.48% |

*Updated 2026-10-16 by `python tools/match.py progress` ([DS Decomp Studio](https://github.com/liolu/ds-decomp-studio)). A function counts only when it compiles to the exact same bytes and the ROM still rebuilds byte for byte.*
<!-- progress:end -->

```shell
python tools/configure.py eu
ninja
python tools/match.py status
```

Created from the rayman-rr template. See `AGENTS.md` for the rules.
