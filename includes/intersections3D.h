#ifndef INTERSECTIONS3D_H
#define INTERSECTIONS3D_H

#include "engine_includes.h"

#include "std_intersect.h"

#ifdef __cplusplus
extern "C"
{
#endif

	int IntersectionSpherePlane(void* plane, void* sphere, float* distance, float* depth, vec3* dir);
	int IntersectionSphereTerrain(void* terrain, void* sphere, float* distance, float* depth, vec3* dir);
	int IntersectionSphereTriangle(vec3 sPos, float r, vec3 p0, vec3 p1, vec3 p2, vec3* resPos, float* dist, float* depth, vec3* dir);
	int IntersectionCapsuleShape(void* obj1, void* shape, float* dist, float* depth, vec3* dir);
	int IntersectionSphereShape(void* obj1, void* shape, float* dist, float* depth, vec3* dir);


}