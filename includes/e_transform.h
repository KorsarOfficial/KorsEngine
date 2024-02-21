#ifndef E_TRANSFORM_H
#define E_TRANSFORM_H

#include "engine_includes.h"

#ifdef __cplusplus
extern "C"
{
#endif
	typedef struct {
		vec2 position;
		vec2 positionDrig;
		vec2 rotation;
		vec2 scale;
		vec2 scaleDrig;
		struct {
			vec2 offset;
			vec2 rotation;
		}img;
		mat4 model;
	} Transform2D;
}

typedef struct {
	vec3 position;
	vec3 rotation;
	vec3 scale;
	struct {
		vec2 offset;
		vec2 scale;
	}img;
	mat4 model;
} Transform3D;

struct GameObject2D;
	struct GameObject3D;

	void Transform2DInit(Transform2D* transform);
	void Transform3DInit(Transform3D* transform);

	void Transform2DSetPosition(struct GameObject2D* go, float x, float y);
	vec2 Transform2DSetPosition(struct GameObject2D* go);
	void Transform2DReposition(struct GameObject2D* go);

