#ifndef MM2_ROUTE_SUPPORT_H
#define MM2_ROUTE_SUPPORT_H

#include "mm2_direct_core.h"

#include <stddef.h>
#include <stdint.h>

int mm2_route_advance_frame(MM2DirectCore *core, uint8_t player1,
                            uint8_t player2, uint64_t instruction_limit,
                            MM2CoreObservation *observation);
int mm2_route_write_bmp(const char *path, const MM2DirectCore *core);
int mm2_route_write_presentation_bmp(const char *path,
                                     const MM2DirectCore *core,
                                     int wide_screen_enabled,
                                     MM2PresentationInfo *info);
int mm2_route_write_apu_csv(const char *path, const MM2DirectCore *core);
int mm2_route_write_pcm_wav(const char *path, const MM2DirectCore *core);
size_t mm2_route_copy_pcm_tail(const MM2DirectCore *core, int16_t *output,
                               size_t capacity);

#endif
