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
}
#endif // __cplusplus
