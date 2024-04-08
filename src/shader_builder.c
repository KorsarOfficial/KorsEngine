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

    ShaderVariable* variable = &builder->variables[builder->num_variables];

    variable->type = type;
    variable->indx = builder->current_index + 1;

    if (num_args > 0)
    {
        if (args = NULL)
            return;

        for (int i = 0; i < num_args;i++)
            variable->args[i] = args[i];

    }

    variable->num_args = num_args;

    if (num_vals > 0)
    {
        if (vals == NULL)
            return;

        for (int i = 0; i < num_vals; i++)
            variable->value[i] = vals[i];


    }
    
    variable->num_values = num_vals;
    variable->flags = flags;

    builder->num_variables++;
    builder->current_index++;

    return builder->current_index;


}

uint32_t ShaderBuilderAddFloat(ShaderBuilder* builder) {

    uint32_t arr[] = { 32, 1 };
    uint32_t res = ShaderBuilderCheckVariable(builder, SHADER_VARIABLE_TYPE_FLOAT, arr, 2);

    if (!res) {
        res = ShaderBuilderAddVariable(builder, SHADER_VARIABLE_TYPE_FLOAT, 0, NULL, 0, arr, 2);
    }

    return res;
}

uint32_t ShaderBuilderAddInt(ShaderBuilder* builder, uint32_t sign) {

    uint32_t arr[] = { 32, sign };
    uint32_t res = ShaderBuilderCheckVariable(builder, SHADER_VARIABLE_TYPE_INT, arr, 2);

    if (!res) {
        res = ShaderBuilderAddVariable(builder, SHADER_VARIABLE_TYPE_INT, 0, NULL, 0, arr, 2);
    }


    return res;

}

uint32_t ShaderBuilderCheckConstans(ShaderBuilder* builder, uint32_t type_indx, uint32_t valu) {

    for (int i = 0; i < builder->num_variables; i++)
    {
        if (builder->variables[i].type == SHADER_VARIABLE_TYPE_CONSTANT && builder->variables[i].args[0] == type_indx && builder->variables[i].values[0] == valu)
            return builder->variables[i].indx;


    }

    return 0;
}

int ShaderBuilderAddConstant(ShaderBuilder* builder, ShaderVariableType var_type, ShaderDataFlags flags, uint32_t valu, uint32_t sign) {
    
    uint32_t arr[] = { 32, sign };
    uint32_t type_indx = ShaderBuilderCheckVariable(builder, var_type, arr, 2);

    if (!type_indx) {
        switch (var_type) {
        case SHADER_VARIABLE_TYPE_INT:
            type_indx = ShaderBuilderAddInt(builder, sign);
            break;
        case SHADER_VARIABLE_TYPE_FLOAT:
            type_indx = ShaderBuilderAddFloat(builder);
            break;
        }
    }

    uint32_t res = ShaderBuilderCheckConstans(builder, type_indx, valu);

    if (!res) {
        ShaderVariable* variable = &builder->variables[builder->num_variables];

        variable->type = SHADER_VARIABLE_TYPE_CONSTANT;
        variable->indx = builder->current_index + 1;
        variable->args[0] = type_indx;
        variable->values[0] = valu;

        variable->num_args = 1;
        variable->num_values = 1;
        variable->flags = flags;

        builder->num_variables++;
        builder->current_index++;

        return builder->current_index;
    }

    return res;
}

uint32_t ShaderBuilderCheckArray(ShaderBuilder* builder, uint32_t type_indx, uint32_t const_indx) {

    for (int i = 0; i < builder->num_variables; i++) 
    {

        if (variable->type == SHADER_VARIABLE_TYPE_ARRAY)
            if (variable->args[0] == type_indx && variable->args[1] == const_indx)
                return builder->variables[i].indx;
    }

    return 0;
}

uint32_t ShaderBuilderAddArray(ShaderBuilder* builder, ShaderVariableType var_type, uint32_t count, char* name) {
    
    uint32_t res = 0, type_indx = 0;

    switch (var_type) {
    case SHADER_VARIABLE_TYPE_FLOAT:
            type_indx = ShaderBuilderAddFloat(builder);
            break;
        case SHADER_VARIABLE_TYPE_INT:
            type_indx = ShaderBuilderAddInt(builder, 0);
            break;
    }

    uint32_t cnst = ShaderBuilderAddConstant(builder, SHADER_VARIABLE_TYPE_INT, 0, count, 0);

    uint32_t check = ShaderBuilderCheckArray(builder, type_indx, cnst);

    if (!check) {
        uint32_t arr[] = { type_indx, cnst };
        res = ShaderBuilderAddVariable(builder, SHADER_VARIABLE_TYPE_ARRAY, 0, arr, 2, NULL, 0);
    }
    else
        res = check;

    if (name != NULL) {
        uint32_t len = strlen(name);

        memcpy(builder->infos[builder->num_debug_infos].name, name, len);
        builder->infos[builder->num_debug_infos].indx = res;
    }
}