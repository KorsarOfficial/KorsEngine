#ifndef STDINC_H
#define STDINC_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "e_vertex.h"
#include "e_buffers_variables.h"

#include "e_math_variables.h"

#define MAX_FONTS 32
#define MAX_IMAGES 32
#define MAX_PIPELINES 50
#define MAX_UNIFORMS 25
#define MAX_BLUE_PRINTS 25

#define MAX_DRAW_OBJECTS UINT16_MAX

#define MAX_GUI_CALLBACKS 25

#define NODE_COUNT 20

#ifdef __cplusplus
extern 'C'
{
#endif

#ifndef __cplusplus

	typedef enum { false, true } bool;
#endif // !__cplusplus

	struct GameObject;
	struct RenderTexture;

	typedef struct {
		struct GameObject* objects[MAX_DRAW_OBJECTS]
			uint32_t size;
	}; } EngineRenderItems;
}
#endif // __cplusplus
