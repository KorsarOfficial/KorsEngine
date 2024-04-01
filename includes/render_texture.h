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
	ENGINE_RENDER_TYPE_GEOMETRY = 0x10,
} EngineRenderType;

typedef enum
{
	ENGINE_RENDER_FLAG_ONE_SHOT = 0x1,
	ENGINE_RENDER_FLAG_SHOOTED = 0x2,
	ENGINE_RENDER_FLAG_PERSPECTIVE = 0x4,
	ENGINE_RENDER_FLAG_FRUSTRUM = 0x8,
	ENGINE_RENDER_FLAG_ORTHOGRAPHIC = 0x10,
	ENGINE_RENDER_FLAG_DEPTH = 0x20,
} EngineRenderFlag; 

typedef struct
{
	void* depth_image;
	void* depth_memory;
	void* depth_view;

	void* image;
	void* image_memory;
	void* sampler;
	void* view;

	void** shadowCubeRenderPass;
	void** shadowCubeMapFaceImageViews;

	void** framebuffers;

	uint32_t m_currentLayout;
} RenderFrame;