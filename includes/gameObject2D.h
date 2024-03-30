#ifndef GAMEOBJECT2D_H
#define GAMEOBJECT2D_H

#include "engine_includes.h"

#include "gameObject.h"
#include "graphicsObject.h"
#include "e_transform.h"

#include "e_descriptor.h"
#include "pipeline.h"
#include "e_texture.h"

#ifdef __cplusplus
extern 'C'
{
#endif

	typedef struct {
		GameObject self;
		GraphicsObject graphObj;
		Transform2D transform;
		GameObjectImage* image;
		char name[256];
	} GameObject2D;

	void GameObject2DTransformBufferUpdate(GameObject2D* go, BluePrintDescriptor *descriptor);
	void GameObject2DImageBuffer(GameObject2D* go, BluePrintDescriptor* descriptor);


}
#endif // __cplusplus
