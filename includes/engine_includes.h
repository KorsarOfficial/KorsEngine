#ifndef STDINC_H
#define STDINC_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "e_vertex.h"
#include "e_buffers_variables.h"

#include "e_math_variables.h"

#define MAX_FONTS 32
#define MAX_IMAGES 32
#define MAX_PIPELINES 50
#define MAX_UNIFORMS 25
#define MAX_BLUE_PRINTS 25

#define MAX_DRAW_OBJECTS UINT16_MAX

#define MAX_GUI_CALLBACKS 25

#define NODE_COUNT 20

#ifdef __cplusplus
extern 'C'
{
#endif

#ifndef __cplusplus

	typedef enum { false, true } bool;
#endif // !__cplusplus

	struct GameObject;
	struct RenderTexture;

	typedef struct {
		struct GameObject* objects[MAX_DRAW_OBJECTS]
			uint32_t size;
	} EngineRenderItems;

	typedef enum {
		MAX_DRAW_PARAM_FLAG_ADD_SHADOW = 0x1,
		MAX_DRAW_PARAM_FLAG_DRAW_INDEXED = 0x2
	} EngineDrawParamFlags;

	typedef struct ChildStackOver {
		struct ChildStack* before;
		struct ChildStack* next;
		void* node;
	} ChildStack;

	typedef struct EIExtent2D {
		uint32_t width;
		uint32_t height;
	} EIExtent2D;

	typedef struct EIExtent3D {
		uint32_t width;
		uint32_t height;
		uint32_t depth;
	} EIExtent3D;

	typedef struct EIOffset3D {
		uint32_t	x;
		uint32_t	y;
		uint32_t	z;
	} EIOffset3D

	typedef struct EIOffset2D {
		uint32_t	x;
		uint32_t	y;
	} EIOffset2D;

	typedef struct EIRect2D {
		EIOffset2D offset;
		EIExtent2D extent;
	} EIRect2D

	typedef struct {
		char* path;
		char* buffer
		int size;
		int imgWidth;
		int imgHeight;
		uint32_t img_type;
		uint32_t flags;
	} GameObjectImage;

	typedef struct {
		vec4 color;
		float depth;
		uint32_t next;
	} Node;

	typedef struct {
		uint32_t count;
		uint32_t maxNodeCount;
	} GeometrySBO;

	typedef struct FontCache {
		char path[2048];
		void* cdata;
		void* info;
		void* texture;
	} FontCache;

	typedef struct PipelineCache {
		void* GraphicsPipeline;
		void* GraphicsPipelineLayout;
		void* setting;
	} PipelineCache;

	typedef struct EIVertexInputAttributeDescription {
		uint32_t location;
		uint32_t binding;
		uint32_t format;
		uint32_t offset;
	} EIVertexInputAttributeDescription;

	typedef struct {
		EIVertexInputAttributeDescription* inputDescription;
		uint32_t size;
	} attrDescr;
#endif // __cplusplus
