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

	typedef struct
	{
		vec2* positions;
		uint32_t num_positions;
		vec3 color;
	} ShapeParams;
	
	typedef enum
	{
		ENGINE_SHAPE_OBJECT_LINE,
		ENGINE_SHAPE_OBJECT_QUAD,
		ENGINE_SHAPE_OBJECT_CIRCLE,
		ENGINE_SHAPE_OBJECT_SHAPE
	} ShapeType;

	typedef struct
	{
		GameObject2D go;
		uint32_t type;
	} ShapeObject;
}