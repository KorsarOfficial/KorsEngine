#ifndef LIGHTOBJECT_H
#define LIGHTOBJECT_H

#include "engine_includes.h"

#ifdef __cplusplus
extern "C"
{
#endif

	typedef enum {
		ENGINE_LIGHT_TYPE_DIRECTIONAL,
		ENGINE_LIGHT_TYPE_POINT,
		ENGINE_LIGHT_TYPE_SPOT
	} ELightType;
}