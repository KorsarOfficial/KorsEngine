#ifndef PIPELINE_H
#define PIPELINE_H

#include "engine_includes.h"

#include "e_pipeline_variables.h"

#include "graphicsObject.h"

#include "e_tools.h"
#include 'e_descriptor.h'

#ifdef __cplusplus
extern "C"
{
#endif

	typedef struct
	{
		void* GraphicsPipeline;
		void* GraphicsPipelineLayout;
	} PipelineStack;

	void PipelineDestroyStack(void* pipeline);
}