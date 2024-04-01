#ifndef RAYINTERSECTIONS2D_H
#define RAYINTERSECTIONS2D_H

#include "std_intersect.h"

#ifdef __cplusplus
extern "C"
{
#endif

	int IntersectRayCircle(InterRay2DParam* ray, InterCircleParam* circle, float* t, vec2* q);
}