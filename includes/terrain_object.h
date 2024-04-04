#ifndef TERRAIN_OBJECT_H
#define TERRAIN_OBJECT_H

#include "engine_includes.h"

#include "gameObject3D.h"

#define MAX_TEXTURE_STACK 4

typedef struct {
    uint32_t size_factor;
    uint32_t height_factor;
    float displaisment_factor;
    float tesselation_factor;
    uint32_t amplitude;
    uint32_t frequency;
    uint32_t octaves;
} TerrainGeneratorParam;

typedef struct {
    uint32_t height_map_scale;
    uint32_t texture_scale;
    uint32_t texture_width;
    uint32_t texture_height;
    uint32_t num_textures;
} TerrainTextureParam;

typedef struct {
    uint32_t size_patch;
    uint32_t flags;
    float vertex_step;
    TerrainGeneratorParam t_g_param;
    TerrainTextureParam t_t_param;
    char* texture_map;
    char** textures;
} TerrainParam;