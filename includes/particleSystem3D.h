#ifndef PARTICLESYSTEM3D_H
#define PARTICLESYSTEM3D_H

#include "engine_includes.h"

#include "gameObject3D.h"

#ifdef __cplusplus
extern "C"
{
#endif

	typedef struct
	{
		vec2 mouse;
		float time;
		vec3 camRot __attribute__ ((aligned(16)));
		vec3 camPos __attribute__ ((aligned(16)));
	} DataBuffer;

	typedef struct
	{
		vec3 position;
		vec3 direction;
		vec3 color;
		float scale;
		float life;
		float speed;
		float gravity;
	} Particle3D;

	typedef struct
	{
		GameObject3D go;
		Particle3D* particles;
		int num_parts;
	} ParticleObject3D;

	void GameObject3DApplyVertexes(GameObject3D* go);
	void GameObject3DRebuildVertexes(GameObject3D* go);
}