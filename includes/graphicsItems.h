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
}