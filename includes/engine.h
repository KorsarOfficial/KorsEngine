#ifndef GAMENGINE_H
#define GAMENGINE_H

#include "engine_includes.h"

#ifdef __cplusplus
extern "C"
{
#endif

#define ENGINE_RELEASE					0
#define ENGINE_PRESS					1
#define ENGINE_REPEAT					2

#define ENGINE_MOUSE_BUTTON_1			1
#define ENGINE_MOUSE_BUTTON_2			2
#define ENGINE_MOUSE_BUTTON_3			3
#define ENGINE_MOUSE_BUTTON_4			4
#define ENGINE_MOUSE_BUTTON_5			5
#define ENGINE_MOUSE_BUTTON_7			6
#define ENGINE_MOUSE_BUTTON_8			7
#define ENGINE_MOUSE_BUTTON_LAST		ENGINE_MOUSE_BUTTON_8
#define ENGINE_MOUSE_BUTTON_LEFT		ENGINE_MOUSE_BUTTON_1
#define ENGINE_MOUSE_BUTTON_RIGHT		ENGINE_MOUSE_BUTTON_2
#define ENGINE_MOUSE_BUTTON_MIDDLE		ENGINE_MOUSE_BUTTON_3

#define ENGINE_KEY_UNKNOWN				-1

#define ENGINE_KEY_SPACE				32
#define ENGINE_KEY_APOSTROPHE			39 // '
#define ENGINE_KEY_COMMA				44 // ,
#define ENGINE_KEY_MINUS				45 // -
#define ENGINE_KEY_PERIOD				46 // .
#define ENGINE_KEY_SLASH				47 // /
#define ENGINE_KEY_0					48
#define ENGINE_KEY_1					49
#define ENGINE_KEY_2					50
#define ENGINE_KEY_3					51
#define ENGINE_KEY_4					52
#define ENGINE_KEY_5					53
#define ENGINE_KEY_6					54
#define ENGINE_KEY_7					55
#define ENGINE_KEY_8					56
#define ENGINE_KEY_9					57
#define ENGINE_KEY_SEMICOLON			59 // ;
#define ENGINE_KEY_EQUAL				61 // =
#define ENGINE_KEY_A					65
#define ENGINE_KEY_B					66
}