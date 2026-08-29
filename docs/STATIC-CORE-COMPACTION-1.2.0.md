# Mega Man 2 1.2.0 static-core compaction

This pass follows the lossless NES compaction rules in Starter NES v4 and the
worked Bubble Bobble method. It changes the representation of already-proven
native translations without changing the admitted program or runtime model.

## Preserved authority

- All 20,149 admitted physical-PRG-bank:CPU-PC identities remain explicit
  production switch cases.
- Each identity calls one fixed helper selected when the C source is generated.
- Operands, successors, branches, stack behavior, cycle values, live bus
  reads/writes and fail-closed handling are preserved.
- Missing bank/PC identities still hard-trap at the final dispatcher boundary.
- No runtime opcode fetcher, decoder, interpreter, JIT, dynamic translator or
  fallback was added.

## Representation

The former 20,149 repeated inline bodies normalize to 96 fixed semantic
helpers. `tools/compact_mm2_direct_core.py` deterministically produces the
compact bank shards and helper authority after the uncompacted generator runs.

`generated/analysis/mm2_direct_core_compaction.json` is the offline sidecar. It
contains the complete context-to-helper mapping, original shard hashes, helper
bodies and the declarations `compiled_into_runtime=false` and
`runtime_opcode_decoder=false`. The sidecar is never linked into the core or
Launcher.exe.

## Visual Studio 2022 x64 Release measurements

| Measure | Before | After | Reduction |
|---|---:|---:|---:|
| Generated core source | 3,191,471 bytes | 2,102,958 bytes | 34.11% |
| Generated semantic objects | 3,834,668 bytes | 1,782,253 bytes | 53.52% |
| Production `mm2-direct-core.lib` | 3,936,688 bytes | 1,889,768 bytes | 52.00% |
| `Launcher.exe` | 5,630,976 bytes | 3,620,352 bytes | 35.71% |
| Clean Windows release ZIP | 1,676,029 bytes | 1,508,582 bytes | 9.99% |

The context count remains 20,149. The reduction comes from factoring repeated
implementation bodies, not deleting admitted authority.

## Equivalence proof

The uncompacted and compact builds each ran the same 4,000-frame controlled
gameplay route (38,096,600 translated instructions). Both ended with frame hash
`5D9DB3D43ECC059A`, PC `83EC`, identity `000C83EA`, no trap and identical PCM,
sprite and input-read totals.

Every emitted artifact matched byte-for-byte:

- APU register trace SHA-256:
  `D9421A3A1694663D1D0EC6FB63420184F61A0FF623AC273746304EC8E0E67B6D`
- Controlled-gameplay WAV SHA-256:
  `F2E1299A1419B81120624CA8BE6463196FACA4CB60A8EC144DF9FCA147A74538`
- Route JSON SHA-256:
  `9BF16606862CE57CF8884FB1891E3FFA9ABDF23FD76D31675C9F06C9D8E77E4A`
- All six emitted BMP comparisons also matched exactly.

Clean regeneration runs the uncompacted generator and compactor in sequence,
then compares every compact generated file byte-for-byte. The complete strict
Release build and regression suite remain required release gates.
