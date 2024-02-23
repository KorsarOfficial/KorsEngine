#ifndef E_WIDGET_SCROLL_H
#define E_WIDGET_SCROLL_H

#include "e_widget.h"

#ifdef __cplusplus
extern "C"
{
#endif

	typedef struct {
		EWidget widget;
		EWidget scroll;
		uint32_t width;
		uint32_t height;
		uint32_t scroll_size;
	} EWidgetScroll;
}