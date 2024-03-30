#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include "engine_includes.h"

#ifdef __cplusplus
extern 'C'
{
#endif

	typedef enum {
		ENGINE_GAME_OBJECT_FLAG_LIGHT = 0x1,
		ENGINE_GAME_OBJECT_FLAG_WIRED = 0x2,
		ENGINE_GAME_OBJECT_FLAG_SELF_CAMERA = 0x4
	} EngineGameObjectFlag;

	typedef enum {
		ENGINE_GAME_OBJECT_TYPE_2D,
		ENGNE_GAME_OBJECT_TYPE_3D
	} GameObjectType;
}