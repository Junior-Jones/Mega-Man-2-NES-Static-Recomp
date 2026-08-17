# Pinned Mesen differential trace

The static core's representative CPU, APU and PPU transitions are locked to
Mesen commit `4b99a0f2a6d0771695abd99d3c0de19b49615420`. The exact SHA-256 pins for
the seven reviewed Mesen source files and the accepted state trace are stored in
`generated/mesen-differential-v11/reference.json`.

The trace covers maskable CPU interrupt entry; NTSC four/five-step APU timing;
pulse, triangle and noise timer transitions; nonlinear pulse/TND mixer vectors;
eight-sprite secondary OAM selection; overflow timing; and sprite-zero timing.
The test runs without a ROM and fails closed on any changed field.

This is a focused differential gate, not a claim that every transistor edge,
DMA collision or PPU rendering quirk is equivalent to Mesen. The remaining
non-claims stay listed in `CURRENT-STATUS-AND-GATES.txt`.
