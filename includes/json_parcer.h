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

typedef struct {
	char* name;
	void** data;
	site_t size;
	engine_gltf_type_num type;
} json_struct;

int read_string(const char* point, char* out);
{
	int iter = 0;

	if(point[iter] == '"')
}
