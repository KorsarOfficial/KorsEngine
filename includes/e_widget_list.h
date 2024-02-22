#ifndef E_WIDGET_LIST_H
#define E_WIDGET_LIST_H

#include "e_widget.h"

#include "e_widget_button.h"

#include "e_widget_scroll.h"

#ifdef __cplusplus
extern "C"
{
#endif

	typedef struct {
		EWidget widget;
		int size_x;
		int size_y;
		int size; 
	} EWidgetInit;

	void ListWidgetInit(EWidgetList* list, int size_x, int size_y, DrawParam* dParam, EWidget* parent);
	void ListWidgetSetColor(EWidgetList* list, vec4 color);

}
#endif // !E_WIDGET_LIST_H
