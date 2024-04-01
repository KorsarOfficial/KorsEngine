#ifndef RENDER_TEXTURE_H
#define RENDER_TEXTURE_H

#include "engine_includes.h"

#include "gameObject.h"

#define MAX_SURFACES 10

typedef enum
{
	ENGINE_RENDER_TYPE_WINDOW = 0x1,
	ENGINE_RENDER_TYPE_IMAGE = 0x2,
	ENGINE_RENDER_TYPE_DEPTH = 0x4,
	ENGINE_RENDER_TYPE_CUBEMAP = 0x8,
	ENGINE_RENDER_TYPE_GEOMETRY = 0x10
} EngineRenderType;