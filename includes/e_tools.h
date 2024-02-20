#ifndef E_TOOLS_H
#define E_TOOLS_H

#include "engine_includes.h"
#include "graphicsItems.h"

#include "e_device_variables.h"

#ifdef __cplusplus
extern "C"
{
#endif

	void* beginSingleTimeCommands();
	void endSingleTimeCommands(void* commandBuffer);
}