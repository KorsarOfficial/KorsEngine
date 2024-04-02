#ifndef SKY_OBJECT_H
#define SKY_OBJECT_H

#include "engine_includes.h"

#include "gameObject2D.h"

typedef enum
{
	ENGINE_SKY_TYPE_NIGHT,
	ENGINE_SKY_TYPE_DAY,
	ENGINE_SKY_TYPE_ATMOSPHERIC
} EngineSkyType;

typedef struct
{
	float time;
	vec3 cam_pos __attribute__((aligned(16)));
	vec3 cam_rot __attribute__((aligned(16)));
	vec3 dir_light __attribute__((aligned(16)));
};