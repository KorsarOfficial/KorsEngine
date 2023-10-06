#ifndef E_BLUE_PRINT_H
#define E_BLUE_PRINT_H

#include "engine_includes.h"
#include "e_pipeline_variables.h"
typedef enum{
    ENGINE_BLUE_PRINT_FLAG_SINLGE_IMAGE = 0x1,
    ENGINE_BLUE_PRINT_ARRAY_IMAGE = 0x2,
    ENGINE_BLUE_PRINT_FLAG_LINKED_UNIFORM = 0x4,
    ENGINE_BLUE_PRINT_FLAG_LINKED_TEXTURE = 0x8,
} EngineBluePrintFlag;
typedef struct{
    void** uniformBuffers;
    void** uniformBuffersMemory;
    uint32_t size;
} UniformStruct;
typedef struct{
    void *update;
    void **textures;
}