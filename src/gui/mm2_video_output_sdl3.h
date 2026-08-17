#ifndef MM2_VIDEO_OUTPUT_SDL3_H
#define MM2_VIDEO_OUTPUT_SDL3_H

#include <windows.h>
#include <stdint.h>
#include <SDL3/SDL.h>

#define MM2_FRAME_WIDTH 256
#define MM2_FRAME_HEIGHT 240
#define MM2_FRAME_PIXELS (MM2_FRAME_WIDTH * MM2_FRAME_HEIGHT)

typedef struct MM2VideoOutput {
    SDL_Window *window;
    SDL_Renderer *renderer;
    SDL_Texture *texture;
    uint32_t pixels[MM2_FRAME_PIXELS];
    int frame_valid;
    int video_initialized;
    int vsync_enabled;
} MM2VideoOutput;

void mm2_video_output_initialize(MM2VideoOutput *output);
int mm2_video_output_open(MM2VideoOutput *output, HWND window, int vsync,
    wchar_t *error, size_t error_capacity);
void mm2_video_output_close(MM2VideoOutput *output);
int mm2_video_output_submit(MM2VideoOutput *output, const uint8_t *indices);
int mm2_video_output_present(MM2VideoOutput *output, int integer_scale,
    int correct_aspect);

#endif
