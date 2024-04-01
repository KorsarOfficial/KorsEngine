#ifndef PARTICLESYSTEM3D_H
#define PARTICLESYSTEM3D_H

#include "engine_includes.h"

#include "gameObject3D.h"

#ifdef __cplusplus
extern "C"
{
#endif

	typedef struct
	{
		vec2 mouse;
		float time;
		vec3 camRot __attribute__ ((aligned(16)));
		vec3 camPos __attribute__ ((aligned(16)));
	} DataBuffer;
}