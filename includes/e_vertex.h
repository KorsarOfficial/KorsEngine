#ifndef E_VERTEX_H
#define E_VERTEX_H

#include "e_math_variables.h"

typedef enum {
	ENGINE_VERTEX_TYPE_DONE,
	ENGINE_VERTEX_TYPE_2D_OBJECT,
	ENGINE_VERTEX_TYPE_3D_OBJECT,
	ENGINE_VERTEX_TYPE_3D_INSTANCE,
	ENGINE_VERTEX_TYPE_TREE_INSTANCE,
	ENGINE_VERTEX_TYPE_MODEL_OBJECT,
	ENGINE_VERTEX_TYPE_2D_PARTICLE,
	ENGINE_VERTEX_TYPE_3D_PARTICLE,
	ENGINE_VERTEX_TYPE_TERRAIN,
	ENGINE_VERTEX_TYPE_SKY,
} VertexType;
