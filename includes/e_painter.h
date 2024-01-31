#ifndef E_PAINTER_H
#define E_PAINTER_H

#include "gameObject2D.h"

#define MAX_GUI_PAINT_OBJECTS 256

typedef enum{
    ENGINE_PAINTER_TYPE_BOX,
    ENGINE_PAINTER_TYPE_CIRCLE,
    ENGINE_PAINTER_TYPE_ORIENTED_BOX,
    ENGINE_PAINTER_TYPE_SEGMENT,
} PAINTER_TYPE_OBJECT;

typedef struct{
    vec2 position;
    vec2 size;
    int type;
    float angle;
    float radius;
    float transparent;
    vec4 color __attribute__ ((aligned (16)));
} PObjectParams;

typedef struct{
    vec2 offset;
    vec2 position;
    vec2 size;
}PainterBuffer;

typedef struct{
    PObjectParams objs[MAX_GUI_PAINT_OBJECTS];
    int size;
}DrawObjectsBuffer;

typedef struct{
    GameObject2D go;
    DrawObjectsBuffer drawObjects;
} EPainter;

typedef void (*PaintDrawFunc)(EPainter *painter);

void PainterObjectInit(EPainter *painter);
void PainterObjectInitDefault(EPainter *painter, DrawParam *dParam);