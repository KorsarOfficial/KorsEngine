#ifndef E_TEXTURE_H
#define E_TEXTURE_H

#include "engine_includes.h"

#include "e_blue_print.h"

#include "e_texture_variables.h"

#include "e_tools.h"

#define EMPTY_IMAGE_WIDTH 100
#define EMPTY_IMAGE_HEIGHT 100

#ifdef __cplusplus
extern "C"
{
#endif

    typedef enum {
        ENGINE_TEXTURE_FLAG_SPECIFIC = 0x1,
        ENGINE_TEXTURE_FLAG_URGB = 0x2,
        ENGINE_TEXTURE_FLAG_R16 = 0x4,
        ENGINE_TEXTURE_FLAG_R16_UINT = 0x8,
        ENGINE_TEXTURE_FLAG_R32 = 0x16,
        ENGINE_TEXTURE_FLAG_R32_UINT = 0x32,
        ENGINE_TEXTURE_FLAG_SRGB = 0x64
    } EngineTextureFlags;