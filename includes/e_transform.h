#ifndef E_TRANSFORM_H
#define E_TRANSFORM_H

#include "engine_includes.h"

#ifdef __cplusplus
extern "C"
{
#endif
	typedef struct {
		vec2 position;
		vec2 positionDrig;
		vec2 rotation;
		vec2 scale;
		vec2 scaleDrig;
		struct {
			vec2 offset;
			vec2 rotation;
		}img;
		mat4 model;
	} Transform2D;
}
#endif // !
