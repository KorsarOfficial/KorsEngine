#ifndef GLTFLOADER_H
#define GLTFLOADER_H

#include "engine_includes.h"

#include "model_include.h"

#ifdef __cplusplus
extern 'C'
{
#endif

	typedef struct {
		float time;
		vec3 vector3;
		vec4 vector4;
	} engine_gltf_anim_keyframe;

	typedef struct {
		engine_gltf_anim_keyframe* keyframes;
		uint32_t node_id;
		float min_time;
		float max_time;
		char type;
		int num_keyframe;
	} engine_gltf_anim_channel;

	typedef struct {
		engine_gltf_anim_channel* channels;
		int num_channels;
		int curr_key;
	} engine_gltf_anim;

	typedef struct {
		char name[256];
		int id_node;
		int id_parent;
		char isModel;
		engine_model_mesh** mesh;
		uint32_t num_mesh;
		mat4 global_matrix;
		mat4 local_matrix;
	} engine_gltf_node;
}
#endif // __cplusplus
