#ifndef GAMEOBJECT3D_H
#define GAMEOBJECT3D_H

#include "gameObject.h"
#include "graphicsObject.h"
#include "e_transform.h"

#define MAX_INSTANCES UINT16_MAX

#ifdef __cplusplus
extern 'C' {
#endif

	typedef struct {
		void* buffer_memory;
		void* buffer;
	} InstanceBuffer;
}