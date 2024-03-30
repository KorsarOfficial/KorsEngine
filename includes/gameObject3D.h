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

	typedef struct GameObject3D {
		GameObject self;
		GraphicsObject graphObj;
		Transform3D transform;
		GameObject* images;
		uint32_t num_images;
		VertexInstance3D instances[MAX_INSTANCES];
		InstanceBuffer buffer;
		uint32_t num_instance;
	} GameObject3D;

	void GameObject3DDefaultUpdate(GameObject3D* go);
	void GameObject3DDefaultDraw(GameObject3D* go, void* command);

}