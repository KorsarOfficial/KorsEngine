#ifndef MODEL_INCLUDE_H
#define MODEL_INCLUDE_H

#define MAX_BONES 64

#include "engine_includes.h"

typedef struct {
	mat4 inv_mat;
	mat4 join_mat;
	uint32_t id_node;
} join_mat_struct;

typedef struct skin_vertex {
	uint8_t bone_index[4];
	uint8_t bone_weight[4];
} skin_vertex;