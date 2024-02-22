#ifndef E_WIDGET_BUTTON_H
#define E_WIDGET_BUTTON_H

#include "engine_includes.h"

#include "e_widget.h"
#include "e_widget_image.h"
#include "e_widget_text.h"

#include <wchar.h>

#ifdef __cplusplus
extern "C"
{
#endif

    typedef struct {
        EWidget widget;
        EWidgetText text;
        EWidgetImage image;
        vec4 selfColor;
    } EWidgetButton;