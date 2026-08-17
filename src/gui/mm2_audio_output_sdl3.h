#ifndef MM2_AUDIO_OUTPUT_SDL3_H
#define MM2_AUDIO_OUTPUT_SDL3_H

#include <windows.h>
#include <stdint.h>
#include <SDL3/SDL_audio.h>

typedef struct MM2AudioOutput {
    SDL_AudioStream *stream;
    uint32_t target_frames;
    float playback_ratio;
    int initialized;
    int paused;
    int priming;
} MM2AudioOutput;

void mm2_audio_output_initialize(MM2AudioOutput *output);
int mm2_audio_output_open(MM2AudioOutput *output,int volume_percent,int latency_ms,
    wchar_t *error,size_t error_capacity);
void mm2_audio_output_close(MM2AudioOutput *output);
void mm2_audio_output_pause(MM2AudioOutput *output);
void mm2_audio_output_resume(MM2AudioOutput *output);
void mm2_audio_output_flush(MM2AudioOutput *output);
void mm2_audio_output_push(MM2AudioOutput *output,const int16_t *samples,size_t count);

#endif
