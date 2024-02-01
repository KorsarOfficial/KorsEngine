#ifndef E_PIPELINE_VARIABLES_H
#define E_PIPELINE_VARIABLES_H

#include <stdint.h>

#include "engine_includes.h"

typedef struct EPViewport {
	float	x;
	float	y;
	float	width;
	float	height;
	float	minDepth;
	float	maxDepth;
} EPViewport;

typedef enum {
	ENGINE_PIPELINE_FLAG_DYNAMIC_VIEW = 0x1,
	ENGINE_PIPELINE_FLAG_FACE_CLOCKWISE = 0x2,
};