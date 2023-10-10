#ifndef E_MATH_VARIABLES_H
#define E_MATH_VARIABLES_H

#include <stdint.h>

#ifdef __cplusplus
extern "C"
{
#endif

typedef struct{
    float x;
    float y;
} vec2;

typedef struct{
    float x;
    float y;
    float z;
} vec3;

typedef struct{
    float x;
    float y;
    float z;
    float w;
} vec4;

typedef struct{
    uint8_t x;
    uint8_t y;
    uint8_t z;
    uint8_t w;
} vec4_u8;
