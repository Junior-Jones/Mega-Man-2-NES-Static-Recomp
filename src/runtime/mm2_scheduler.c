#include "internal/mm2_direct_core_internal.h"

void scheduler_advance(MM2DirectCore *c, uint64_t cpu_cycles) {
    uint64_t ticks = apu_advance(c, cpu_cycles) * 3u;
    while (ticks-- != 0u) ppu_tick(c);
}
