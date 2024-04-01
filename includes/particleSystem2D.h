#ifndef PARTICLESYSTEM2D_H
#define PARTICLESYSTEM2D_H

#include "engine_includes.h"

#include "gameObject2D.h"

#ifndef __cplusplus
extern "C"
{
#endif

	typedef struct
	{
		vec2 position;
		vec2 direction;
		vec3 color;
		float scale;
		float life;
		float speed;
		float gravity;
	} Particle2D;

	typedef struct
	{
		GameObject2D go;
		Particle2D* particles;
		int num_parts;
	} ParticleObject2D;