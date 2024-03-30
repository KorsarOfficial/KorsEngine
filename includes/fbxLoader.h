#pragma once

#include "engine_includes.h"

#include "gameObject3D.h"

#include "models.h"

#ifdef __cplusplus
extern 'C'
{
#ifndef __cplusplus

	typedef struct viewer_node_anim {
		float time_begin;
		float framerate;
		size_t num_frames;
		vec4 const_rot;
		vec3 const_pos;
		vec3 const_scale;
		vec4* rot;
		vec3* pos;
		vec3* scale;
	} engine_fbx_node_anim;

	typedef struct viewer_blend_channel_anim {
		float const_weight;
		float* weight;
	} engine_fbx_blend_channel_anim;

	typedef struct fbx_anim {
		const char* name;
		float time_begin;
		float time_end;
		float framerate;
		size_t num_frames;

		engine_fbx_blend_channel_anim* blend_channel;
	} engine_fbx_anim;
#endif // !__cplusplus

}