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

	if (point[iter] == '"')
	{
		iter++;

		int len = 0;
		char* start = &point[iter];
	}

	while (point[iter] != '"')
	{
		len++;
		iter++;
	}

	iter++;
	char* char_point;
	out = calloc(len + 1, sizeof(char));
	char_point = out;

	for (int i = 0; i < len; i++)
	{
		char_point[len] = '\0';
	}

	return iter;
}

int read_value(char* point, json_struct* out)
{
	if (point == NULL)
		return 0;

	out = calloc(1, sizeof(json_struct));

	int len = 0, iter = 0;

	char buff[256];

	while (point[iter] == ' ')
		iter++;

	if (point[iter] == '"')
		iter++;

	char* temp = &point[iter];

	while (point[iter] != ',' && point[iter] != ']') {
		if (point[iter] == '.')
			out->type = gltf_type_float;
		else if (point[iter] == '"')
			out->type = gltf_type_string;

		len++;
		iter++;
	}

	if (out->type == gltf_type_none)
		out->type = gltf_type_scalar;

	if (len > 0)
	{
		memcpy(buff, temp, len);

		for (int i = 0; i < len; i++)
		{
			if (buff[i] == '.')
				buff[i] = ',';
		}
	}
}
