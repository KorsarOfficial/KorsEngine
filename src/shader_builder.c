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
