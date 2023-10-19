#ifndef E_CAMERA_H
#define E_CAMERA_H

#include "engine_includes.h"

#ifdef __cplusplus
extern "C"
{
#endif
typedef struct{
    vec2 position;
    vec2 rotation;
    vec2 scale;
} Camera2D

typedef struct{
    vec3 position __attribute__ ((aligned (16)));
    vec3 rotation __attribute__ ((aligned (16)));
    vec3 scale __attribute__ ((aligned (16)));
    double view_distance;
    double view_angle;
    double view_near;
} Camera3D;

void Camera2DInit(Camera2D *cam);
void Camera3DInit(Camera3D *cam);

void Camera3DSetViewDistance(Camera3D *cam, double distance);
}