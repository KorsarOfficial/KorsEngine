#ifndef SHAPEOBJECT_H
#define SHAPEOBJECT_H

#include "gameObject2D.h"

#ifdef __cplusplus
extern "C"
{
#endif

	typedef struct
	{
		vec2 position;
		vec2 direction;
		float length;
		vec3 color;
	} LineParam;

	typedef struct
	{
		float size;
		vec3 color;
	} QuadParam;

	typedef struct
	{
		float radius;
		int freq;
		vec3 color;
	} CircleParams;
}