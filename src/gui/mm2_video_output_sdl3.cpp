#include "mm2_video_output_sdl3.h"

#include <SDL3/SDL_properties.h>
#include <SDL3/SDL_render.h>
#include <SDL3/SDL_video.h>
#include <algorithm>
#include <cstring>
#include <iterator>

namespace {
const uint32_t kNesRgb[64] = {
    0x545454,0x001E74,0x081090,0x300088,0x440064,0x5C0030,0x540400,0x3C1800,0x202A00,0x083A00,0x004000,0x003C00,0x00323C,0,0,0,
    0x989698,0x084CC4,0x3032EC,0x5C1EE4,0x8814B0,0xA01464,0x982220,0x783C00,0x545A00,0x287200,0x087C00,0x007628,0x006678,0,0,0,
    0xECEEEC,0x4C9AEC,0x787CEC,0xB062EC,0xE454EC,0xEC58B4,0xEC6A64,0xD48820,0xA0AA00,0x74C400,0x4CD020,0x38CC6C,0x38B4CC,0x3C3C3C,0,0,
    0xECEEEC,0xA8CCEC,0xBCBCEC,0xD4B2EC,0xECAEEC,0xECAED4,0xECB4B0,0xE4C490,0xCCD278,0xB4DE78,0xA8E290,0x98E2B4,0xA0D6E4,0xA0A2A0,0,0};

void set_error(wchar_t *error,size_t cap,const wchar_t *prefix) {
    wchar_t detail[256]={};
    if(!error||!cap)return;
    MultiByteToWideChar(CP_UTF8,0,SDL_GetError(),-1,detail,(int)std::size(detail));
    _snwprintf(error,cap,L"%s: %s",prefix,detail[0]?detail:L"Unknown SDL error");
    error[cap-1]=0;
}
}

void mm2_video_output_initialize(MM2VideoOutput *o){if(o)std::memset(o,0,sizeof(*o));}

int mm2_video_output_open(MM2VideoOutput *o,HWND hwnd,int vsync,wchar_t *error,size_t cap){
    if(!o||!hwnd)return 0;
    mm2_video_output_close(o);
    if(!SDL_InitSubSystem(SDL_INIT_VIDEO)){set_error(error,cap,L"Unable to initialize SDL video");return 0;}
    o->video_initialized=1;
    SDL_PropertiesID wp=SDL_CreateProperties();
    if(!wp||!SDL_SetPointerProperty(wp,SDL_PROP_WINDOW_CREATE_WIN32_HWND_POINTER,hwnd)){
        if(wp)SDL_DestroyProperties(wp);set_error(error,cap,L"Unable to wrap the game window");mm2_video_output_close(o);return 0;}
    o->window=SDL_CreateWindowWithProperties(wp);SDL_DestroyProperties(wp);
    if(!o->window){set_error(error,cap,L"Unable to wrap the game window");mm2_video_output_close(o);return 0;}
    SDL_PropertiesID rp=SDL_CreateProperties();
    if(!rp||!SDL_SetPointerProperty(rp,SDL_PROP_RENDERER_CREATE_WINDOW_POINTER,o->window)||
       !SDL_SetStringProperty(rp,SDL_PROP_RENDERER_CREATE_NAME_STRING,"direct3d11,direct3d12,software")||
       !SDL_SetNumberProperty(rp,SDL_PROP_RENDERER_CREATE_PRESENT_VSYNC_NUMBER,vsync?1:0)){
        if(rp)SDL_DestroyProperties(rp);set_error(error,cap,L"Unable to configure video output");mm2_video_output_close(o);return 0;}
    o->renderer=SDL_CreateRendererWithProperties(rp);SDL_DestroyProperties(rp);
    if(!o->renderer){set_error(error,cap,L"Unable to create video renderer");mm2_video_output_close(o);return 0;}
    o->texture=SDL_CreateTexture(o->renderer,SDL_PIXELFORMAT_RGBA32,SDL_TEXTUREACCESS_STREAMING,MM2_VIDEO_MAX_WIDTH,MM2_VIDEO_HEIGHT);
    if(!o->texture||!SDL_SetTextureScaleMode(o->texture,SDL_SCALEMODE_NEAREST)){
        set_error(error,cap,L"Unable to create game texture");mm2_video_output_close(o);return 0;}
    o->vsync_enabled=vsync!=0;return 1;
}

void mm2_video_output_close(MM2VideoOutput *o){
    if(!o)return;if(o->texture)SDL_DestroyTexture(o->texture);if(o->renderer)SDL_DestroyRenderer(o->renderer);
    if(o->window)SDL_DestroyWindow(o->window);if(o->video_initialized)SDL_QuitSubSystem(SDL_INIT_VIDEO);std::memset(o,0,sizeof(*o));
}

int mm2_video_output_submit(MM2VideoOutput *o,const uint8_t *indices,int width,int height){
    if(!o||!indices||width<1||width>MM2_VIDEO_MAX_WIDTH||height<1||height>MM2_VIDEO_HEIGHT)return 0;
    const size_t count=(size_t)width*(size_t)height;
    for(size_t i=0;i<count;++i){uint32_t rgb=kNesRgb[indices[i]&0x3fu];o->pixels[i]=0xff000000u|((rgb&0xffu)<<16)|(rgb&0xff00u)|((rgb>>16)&0xffu);}
    o->active_width=width;o->active_height=height;o->frame_valid=1;return 1;
}

int mm2_video_output_present(MM2VideoOutput *o,int integer_scale,int correct_aspect){
    if(!o||!o->renderer||!o->texture||!o->frame_valid)return 0;
    int ow=0,oh=0;if(!SDL_GetRenderOutputSize(o->renderer,&ow,&oh))return 0;
    const int aspect_width=correct_aspect?(o->active_width>256?16:4):o->active_width;
    const int aspect_height=correct_aspect?(o->active_width>256?9:3):o->active_height;
    int dw=0,dh=0;
    if((long long)ow*aspect_height<=(long long)oh*aspect_width){dw=ow;dh=ow*aspect_height/aspect_width;}
    else{dh=oh;dw=oh*aspect_width/aspect_height;}
    if(integer_scale>=1&&integer_scale<=4){
        const int requested_height=o->active_height*integer_scale;
        dh=std::min(oh,requested_height);dw=dh*aspect_width/aspect_height;
        if(dw>ow){dw=ow;dh=dw*aspect_height/aspect_width;}
    }
    SDL_FRect dst{(float)(ow-dw)/2.0f,(float)(oh-dh)/2.0f,(float)dw,(float)dh};
    SDL_Rect update_rect{0,0,o->active_width,o->active_height};
    SDL_FRect src{0.0f,0.0f,(float)o->active_width,(float)o->active_height};
    if(!SDL_UpdateTexture(o->texture,&update_rect,o->pixels,o->active_width*(int)sizeof(uint32_t))||
       !SDL_SetRenderDrawColor(o->renderer,0,0,0,255)||!SDL_RenderClear(o->renderer)||
       !SDL_RenderTexture(o->renderer,o->texture,&src,&dst))return 0;
    SDL_RenderPresent(o->renderer);return 1;
}
