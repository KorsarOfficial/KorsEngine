#ifndef GRAPHICSITEMS_H
#define GRAPHICSITEMS_H

#include "engine_includes.h"

#define MAX_SHAPES	10

#ifdef __cplusplus
extern "C"
{
	#endif

	typedef struct {
		char* code;
		site_t size;
	} shader;

	typedef struct {
		void* pipeLine;
		void* layout;
	} PipelineStruct;

	typedef struct {
		void* descr_pool;
		void* descr_set_layout;
		void** descr_sets;
	} ShaderDescriptor;

	typedef struct {
		ShaderDescriptor descriptor;
		PipelineStruct pipelines[MAX_PIPELINES];
		uint32_t num_pipelines;
	} ShaderPack;

	typedef struct {
		ShaderPack shader_packs[MAX_BLUE_PRINTS];
		uint32_t num_shader_packs;
		bool perspective;
	} GraphicItems;

	typedef struct {
		void* vertexBuffer;
		void* vertexBufferMemory;
		uint32_t typeSize;
		uint32_t verticesSize;
		uint32_t bufferSize;
		bool extend;
		void* vertices;
	} vertexParam;
}