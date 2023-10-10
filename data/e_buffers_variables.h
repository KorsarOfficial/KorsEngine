#ifndef E_BUFFERS_VARIABLES_H
#define E_BUFFERS_VARIABLES_H

#include "e_math_variables.h"

#define MAX_BONES 128
#define MAX_LIGHTS 16

typedef struct {
    vec2 position;
    vec2 rotation;
    vec2 scale;
} TransformBuffer2D;

typedef struct{
    vec2 offset;
    vec2 rotation;
} ImageBufferObjects;

typedef struct{
    mat4 model;
    mat4 view;
    mat4 proj;
} ModelBuffer3D;