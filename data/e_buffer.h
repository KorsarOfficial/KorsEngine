#ifndef E_BUFFER_H
#define E_BUFFER_H

#include "engine_includes.h"

#include "e_blue_print.h"

#include "e_tools.h"

#define MAX_VERTEX_COUNT 65536
#define MAX_INDEX_COUNT MAX_VERTEX_COUNT * 3

typedef enum{
    ENGINE_BUFFER_ALLOCATE_VERTEX,
    ENGINE_BUFFER_ALLOCATE_INDEX,
    ENGINE_BUFFER_ALLOCATE_UNIFORM,
    ENGINE_BUFFER_ALLOCATE_STAGING,
} BufferAllocType;