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


}
#endif // __cplusplus
