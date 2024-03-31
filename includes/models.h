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

	typedef struct {
		ModelStruct* models;
		uint32_t num_models;
		uint32_t id_node;
		mat4 model;
	} ModelNode;

	typedef struct {
		GameObject self;
		Transform3D transform;

		ModelNode* nodes;
		uint32_t num_draw_nodes;

		mat4 join_mats[MAX_BONES];

		void* obj;
		uint32_t obj_size;
	} ModelObject3D;
}