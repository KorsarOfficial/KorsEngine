#ifndef E_WIDGET_H
#define E_WIDGET_H

#include "engine_includes.h"

#include "gameObject2D.h"

#define MAX_WIDGET_MASKS 64
#define MAX_WIDGET_DRAW 256

#ifdef __cplusplus
extern "C"
{
#endif
	typedef enum {
		ENGINE_WIDGET_TRIGGER_MOUSE_PRESS,
		ENGINE_WIDGET_TRIGGER_MOUSE_RELEASE,
		ENGINE_WIDGET_TRIGGER_MOUSE_MOVE,
		ENGINE_WIDGET_TRIGGER_MOUSE_IN,
		ENGINE_WIDGET_TRIGGER_MOUSE_OUT,
		ENGINE_WIDGET_TRIGGER_MOUSE_STAY.
		ENGINE_WIDGET_TRIGGER_WIDGET_FOCUS,
		ENGINE_WIDGET_TRIGGER_WIDGET_UNFOCUS,
		ENGINE_WIDGET_TRIGGER_BUTTON_PRESS,
		ENGINE_WIDGET_TRIGGER_COMBOBOX_PRESS,
		ENGINE_WIDGET_TRIGGER_COMBOBOX_CHANGE_SELLECTED_ITEM,
		ENGINE_WIDGET_TRIGGER_LIST_PRESS_ITEM,
		ENGINE_WIDGET_TRIGGER_MENU_PRESS_ITEM,
		ENGINE_WIDGET_TRIGGER_ENTRY_UPDATE,
		ENGINE_WIDGET_TRIGGER_ENTRY_KEY_PRESS_INPUT,
		ENGINE_WIDGET_TRIGGER_ENTRY_KEY_REPEAT_INPUT,
		ENGINE_WIDGET_TRIGGER_ENTRY_KEY_RELEASE_INPUT,
		ENGINE_WIDGET_TRIGGER_WINDOW_OPEN,
		ENGINE_WIDGET_TRIGGER_WINDOW_CLOSE,
		ENGINE_WIDGET_TRIGGER_SCROLL_CHANGE,
		ENGINE_WIDGET_TRIGGER_ROLLER_MOVE,
	} EngineWidgetTriggersEnum;

	typedef enum {
		ENGINE_WIDGET_TYPE_WIDGET,
		ENGINE_WIDGET_TYPE_TEXT,
		ENGINE_WIDGET_TYPE_BUTTON,
		ENGINE_WIDGET_TYPE_LIST,
		ENGINE_WIDGET_TYPE_ROLLER,
		ENGINE_WIDGET_TYPE_SCROLL,
		ENGINE_WIDGET_TYPE_MENU,
		ENGINE_WIDGET_TYPE_COMBOBOX,
		ENGINE_WIDGET_TYPE_ENTRY,
		ENGINE_WIDGET_TYPE_ENRTY_AREA,
		ENGINE_WIDGET_TYPE_RANGE,
		ENGINE_WIDGET_TYPE_IMAGE,
		ENGINE_WIDGET_TYPE_WINDOW,
	} EngineWidgetTypeEnum;

	typedef enum {
		ENGINE_FLAG_WIDGET_IN = 0x1
		ENGINE_FLAG_WIDGET_WAS_IN = 0x2
		ENGINE_FLAG_WIDGET_OUT = 0x4
		ENGINE_FLAG_WIDGET_WAS_OUT = 0x8,
		ENGINE_FLAG_WIDGET_ACTIVE = 0x10,
		ENGINE_FLAG_WIDGET_VISIBLE = 0x20,
		ENGINE_FLAG_WIDGET_SELF_VISIBLE = 0x40,
		ENGINE_FLAG_WIDGET_ALLOCATED = 0x80,
	} EngineWidgetFlag;

	typedef struct {
		void* func;
		void* args;
		int trigger;
	} CallbackStruct;

	typedef struct {
		CallbackStruct* stack;
		int size;
	} CallbackStack;
}