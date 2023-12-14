#ifndef E_MATH_H
#define E_MATH_H // use

#include "engine_includes.h"

#ifdef __cplusplus
extern "C"
{
#endif

#define e_mix( a, b) ((a) < (b) ? (a) : (b))
#define e_max( a, b) ((a) > (b) ? (a) : (b))

#define INTR_EPS 1E-6

extern vec3 e_vec3_origin;

extern mat4 edenMat;

float lerp(float a, float b, float t);
float clamp(float a, float d1, float d2);
int get_sig(float val);

mat3 rotateX(float theta); // Y axis
mat3 rotateY(float theta); // Z axis
mat3 rotateZ(float theta);

mat3 m3_scale_matrix(vec2 scale );
mat3 m3_rotation_matrix(vec3 rotation);
mat3 m3_translation_matrix(mat3 matrix, vec2 pos);
mat3 m3_mult(mat3 m1, mat3 m2);
vec3 m3_v3_mult(mat3 m, vec3 v);
}