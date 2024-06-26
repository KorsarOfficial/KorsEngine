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

	void Particle2DInit(ParticleObject2D* particle, DrawParam dParam);

	void Particle2DAddDefault(ParticleObject2D* particle, void* render);

	void Particle2DAdd(ParticleObject2D* particle, vec2 position, vec2 direction, float speed, float gravity, float life);

#ifdef __cplusplus
}
#endif

#endif