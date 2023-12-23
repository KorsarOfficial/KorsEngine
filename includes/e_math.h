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

vec2 vec2_f(float x, float y);

float v2_cross(vec2 a, vec2 b);
vec2 v2_add(vec2 a, vec2 b);
vec2 v2_adds    (vec2 a, float s);
vec2 v2_sub     (vec2 a, vec2 b);
vec2 v2_subs    (vec2 a, float s);
vec2 v2_mul     (vec2 a, vec2 b);
vec2 v2_muls    (vec2 a, float s);
vec2 v2_div     (vec2 a, vec2 b);
vec2 v2_divs    (vec2 a, float s);
vec2 v2_norm(vec2 v);
float v2_length(vec2 v);
float v2_dot    (vec2 a, vec2 b);
float v2_distance(vec2 v1, vec2 v2);

vec3 vec3_f(float x, float y, float z);

float v3_maxs(vec3 a);
float v3_mins(vec3 a);
vec3 v3_abs(vec3, a);
}