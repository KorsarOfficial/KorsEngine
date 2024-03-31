#ifndef INTERSECTIONS2D_H
#define INTERSECTIONS2D_H

#include "engine_includes.h"

#include "std_intersect.h"

#ifdef __cplusplus
extern "C"
{
#endif

	bool IntersectGJK2D(GJKObject* gjk, void* obj1, void* obj2);
}