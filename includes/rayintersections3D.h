#ifndef RAYINTERSECTIONS3D_H
#define RAYINTERSECTIONS3D_H

#include "std_intersect.h"

#ifdef __cplusplus
extern "C"
{
#endif

	int Intersect3DRaySphere(InterRay3DParam* ray, vec3 ObjP, float* t, vec3* q);

	int Intersect3DSegmentCylinder(InterRay3DParam* ray, vec3 p, vec3 q, float r, float* t, vec3 q_res);
	
	int Intersect3DRayAABB(InterRay3DParam* ray, vec3 obj_min, vec3 obj_max, float* tmin, flaot* tmax, vec3* q);

}