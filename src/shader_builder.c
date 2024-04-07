#include "shader_builder.h"

#include "spirv.h"

#include <stdio.h>
#include <stdlib.h>

uint32_t ShaderBuilderCheckVariable(ShaderBuilder* builder, ShaderVariableType variable_type, uint32_t* vals, uint32_t size) {

    uint32_t find = 0;
    for (int i = 0; i < builder->num_variables; i++)
    {
        find = 1;

        if (builder->variables[i].type == variable_type) {
            for (int j = 0; j < size; j++) {
                if (builder->variables[i].values[j] != vals[j]) {
                    find = 0;
                    break;
                }
            }

            if (find)
                return builder->variables[i].indx;
        }
    }

    return 0;
}

ShaderVariable* ShaderBuilderFindVar(ShaderBuilder* builder, uint32_t indx) {

    ShaderVariable* res = NULL;

    for (int i = 0; i < builder->num_variables; i++) {
        if (builder->variables[i].indx == indx) {
            res = &builder->variables[i];
            break;
        }
    }

    return res;
}

void ShaderBuilderAddOp(ShaderBuilder* builder, uint32_t code, uint32_t value) {

    builder->code[builder->size] = (value << 16) | code;

    builder->size++;
}

void ShaderBuilderAddValue(ShaderBuilder* builder, uint32_t value) {

    builder->code[builder->size] = value;

    builder->size++;
}

void ShaderBuilderAddString(ShaderBuilder* builder, char* string) {
    uint32_t len = strlen(string);

    char* point = &builder->code[builder->size];

    memcpy(point, string, len);

    while (len % sizeof(uint32_t)) {
        builder->infos[builder->num_debug_infos].name[len] = 0;
        len++;
    }

    builder->size += len / sizeof(uint32_t);
}

uint32_t ShaderBuilderAddVariable(ShaderBuilder* builder, ShaderVariableType type, uint32_t flags, uint32_t* args, uint32_t num_args, uint32_t* vals, uint32_t num_vals) {


}