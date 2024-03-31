#ifndef MARCHINGCUBE_OBJECT_H
#define MARCHINGCUBE_OBJECT_H

#include "engine_includes.h"

#include "gameObject3D.h"

typedef struct {
	GameObject3D go;
	float isolevel;
	float* grid;
	uint32_t size;
} MarchingCubeObject;

void MarchingCubeObjectSetGridValue(float* grid, uint32_t size, int x, int y, int z, float value);
