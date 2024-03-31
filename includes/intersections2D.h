#ifndef INTERSECTIONS2D_H
#define INTERSECTIONS2D_H

#include "engine_includes.h"

#include "std_intersect.h"

#ifdef __cplusplus
extern "C"
{
#endif

	bool IntersectGJK2D(GJKObject* gjk, void* obj1, void* obj2);
	int IntersectLineToLine(vec2 p1, vec2 p2, vec2 p3, vec2 p4);
	int IntersectionCircleTriangle(vec2 sPos, float r, vec2 p0, vec2 p1, vec2 p2, vec2* resPos, float* dist, float* depth, vec2* dir);
	int IntersectionCircleCirlce(InterCircleParam* o1, InterCircleParam* o2, float* dist, float* depth, float* depth, vec2* dir);
	int IntersectionCircleSquare(InterCircleParam* sph, InterSquareParam* o2, float* dist, float* depth, vec2* dir);
	int IntersectionSquareSquare(InterSquareParam* box1, InterSquareParam* box2, float* dist, float* depth, vec2* dir);
	int IntersectionTriangleSquare(InterTriangleParam triangle, InterSquareParam* box);
	int IntersectionSphapeSquare(void* obj1, InterSquareParam* square);
}