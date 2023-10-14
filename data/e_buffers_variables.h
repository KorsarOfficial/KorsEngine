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

typedef struct {
    mat4 view;
    vec3 obj_pos __attribute__ ((aligned (16)));
    vec3 obj_rot __attribute__ ((aligned (16)));
    vec3 cam_pos __attribute__ ((aligned (16)));
    vec3 cam_rot __attribute__ ((aligned (16)));
} SDFBuffer;

typedef struct{
    vec4 lightpos;
    vec4 frustumPlanes[6];
    float displacementFactor;
    float tessellationFactor;
    vec2 viewportDim;
    float tessellatedEdgeSize;
} TesselationBuffer;

typedef struct {
    vec3 position __attribute__ ((aligned (16)));

    float constant;
    float linear;
    float quadratic;

    vec3 ambient __attribute__ ((aligned (16)));
    vec3 diffuse __attribute__ ((aligned (16)));
    vec3 specular __attribute__ ((aligned (16)));
} PointLight;

typedef struct{
    vec3 position __attribute__ ((aligned (16)));
    vec3 direction __attribute__ ((aligned (16)));

    float constant;
    float linear;
    float quadratic;
    float cutOff

    vec3 ambient __attribute__ ((aligned (16)));
    vec3 diffuse __attribute__ ((aligned (16)));
    vec3 specular __attribute__ ((aligned (16)));
} SpotLight;

typedef struct{
    vec3 position __attribute__ ((aligned (16)));
    vec3 direction __attribute__ ((aligned (16)));

    vec3 ambient __attribute__ ((aligned (16)));
    vec3 diffuse __attribute__ ((aligned (16)));
    vec3 specular __attribute__ ((aligned (16)));
} DirLight