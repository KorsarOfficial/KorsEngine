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

typedef struct {
		vec2 position;
	vec3 color;
	vec2 texCoord;
} Vertex 2D;


typedef struct {
	vec3 position;
	vec3 normal;
	vec2 texCoord;
} Vertex3D;