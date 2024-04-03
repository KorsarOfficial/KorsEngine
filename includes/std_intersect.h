#ifndef STD_INTERSECT_H
#define STD_INTERSECT_H

#include "engine_includes.h"

#include "e_math.h"

#ifdef __cplusplus
extern "C"
{
#endif

	typedef struct
	{
		vec3 position;
		float radius;
		float height;
	} InterCapsuleParam;

	typedef struct
	{
		vec2 center;
		float radius;
	} InterCircleParam;

	typedef struct
	{
		vec3 center;
		float radius;
	} InterSphereParam;

	typedef struct
	{
		vec3 position;
		float size;
	} InterSquareParam;

	typedef struct
	{
		vec3 position;
		float size;
	} InteraAABBParam;

	typedef struct
	{
		vec3 center;
		vec3 axes;
		vec3 halfwidth;
	} InterOBBParam;

	typedef struct
	{
		vec2 position;
		vec2 direction;
		float distance;
	};
}