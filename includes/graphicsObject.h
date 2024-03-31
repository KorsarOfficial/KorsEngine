#ifndef GRAPHICSOBJECT_H
#define GRAPHICSOBJECT_H

#include "engine_includes.h"
#include "graphicsItems.h"

#include "e_blue_print.h"

#ifdef __cplusplus
extern "C"
{
#endif

	typedef struct {
		Blueprints blueprints;
		GraphicItems gItems;
		aboutShader aShader;
		bool lock;
		Shape shapes[MAX_SHAPES];
		uint32_t num_shapes;
	} GraphicsObject;
}