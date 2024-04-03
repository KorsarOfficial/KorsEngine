#ifndef SPRITEOBJECT_H
#define SPRITEOBJECT_H

#include "gameObject2D.h"

#ifdef __cplusplus
extern "C"
{
#endif

	typedef struct
	{
		vec3 color;
		char texturePath[256];
		char vertShader[256];
		char fragShader[256];
	} SpriteParam;
}