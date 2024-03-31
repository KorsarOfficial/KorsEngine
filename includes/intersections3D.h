#ifndef INTERSECTIONS3D_H
#define INTERSECTIONS3D_H

#include "engine_includes.h"

#include "std_intersect.h"

#ifdef __cplusplus
extern "C"
{
#endif

	int IntersectionSpherePlane(void* plane, void* sphere, float* distance, float* depth, vec3* dir);
	
}