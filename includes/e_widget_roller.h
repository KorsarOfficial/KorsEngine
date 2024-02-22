#ifndef E_WIDGET_ROLLER_H
#define E_WIDGET_ROLLER_H

#include "e_widget.h"

#ifdef __cplusplus
extern "C"
{
#endif

	typedef struct {
		EWidget widget;
		bool vertical;
		float* source;
		float move_val;
		float stable_val;
		vec4 selfColor;
	} EWidgetRoller;
}

#endif // !E_WIDGET_ROLLER_H
