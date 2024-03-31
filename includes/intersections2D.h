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
}