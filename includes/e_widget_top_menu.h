#ifndef E_WIDGET_TOP_MENU_H
#define E_WIDGET_TOP_MENU_H

#include "e_widget.h"
#include "e_widget_button.h"
#include "e_widget_scroll.h"
#include "e_widget_list.h"
#include "e_widget_window.h"

#ifdef __cplusplus
extern "C"
{
#endif

	typedef struct {
		EWidgetButton* button;
		EWidgetList* list;
		bool submenu;
	} LinkedButtonList;
}