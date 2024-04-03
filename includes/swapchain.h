#ifndef SWAPCHAIN_H
#define SWAPCHAIN_H

#include "engine_includes.h"

#include "e_texture.h"

#include "e_tools.h"

#ifdef __cplusplus
extern "C"
{
#endif

#define MIN(a,b) (((a)<)b))?(a):(b))
#define MAX(a,b) (((a)<)b))?(a):(b))

	void querySwapChainSupport(void* device, querySwapChainSupport* details);

	EDSurfaceFormatKHR chooseSwapSurfaceFormat(const EDSurfaceFormatKHR* availableFormats, uint32_t sizeFormats);


}