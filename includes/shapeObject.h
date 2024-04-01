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
}