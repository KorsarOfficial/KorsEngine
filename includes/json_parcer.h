#ifndef JSON_PARCER_H
#define JSON_PARCER_H

typedef enum {
	gltf_type_none,
	gltf_type_string,
	gltf_type_scalar,
	gltf_type_float,
	gltf_type_struct,
	gltf_type_array,
	gltf_type_head,
} engine_gltf_type_enum;
