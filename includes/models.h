#ifndef MODELS_H
#define MODELS_H

#include "engine_includes.h"

#include "model_include.h"

#include "gameObject.h"
#include "graphicsObject.h"
#include "e_transform.h"

#ifdef __cplusplus
extern "C"
{
#endif

	typedef struct {
		GraphicsObject graphObj;
		GameObjectImage* diffuse;
		GameObjectImage* specular;
		GameObjectImage* normal;
	} ModelStruct;
}