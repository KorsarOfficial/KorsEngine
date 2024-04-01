#ifndef SHADER_BUILDER_H
#define SHADER_BUILDER_H

#include <stdint.h>

#define EXTERN_IMPORT_POINT_INDEX 0x1

#define SHADER_MAX_LENGTH 2048
#define SHADER_MAX_IODATA 32
#define SHADER_MAX_VARIABLES 256
#define SHADER_MAX_DEBUG_NAMES 256
#define SHADER_MAX_FUNCTIONS 32
#define SHADER_MAX_DECORATIONS 32

typedef enum
{
	SHADER_TYPE_FRAGMENT,
	SHADER_TYPE_VERTEX,
	SHADER_TYPE_COMPUTED,
	SHADER_TYPE_GEOMETRY,
	SHADER_TYPE_TESELLATION_CONTROL,
	SHADER_TYPE_TESELLATION_EVALUATION,
} ShaderType;

typedef enum
{
	SHADER_VARIABLE_TYPE_VOID,
	SHADER_VARIABLE_TYPE_INT,
	SHADER_VARIABLE_TYPE_FLOAT,
	SHADER_VARIABLE_TYPE_VECTOR,
	SHADER_VARIABLE_TYPE_ARRAY,
	SHADER_VARIABLE_TYPE_STRUCT,
	SHADER_VARIABLE_TYPE_VARIABLE,
	SHADER_VARIABLE_TYPE_CONSTANT,
	SHADER_VARIABLE_TYPE_POINTER,
	SHADER_VARIABLE_TYPE_FUNCTION,
	SHADER_VARIABLE_TYPE_EXTENDED_IMPORT,
} ShaderVariableType;

typedef struct
{
	ShaderVariableType var_Type;
	uint32_t size;
	uint32_t type;
	char name[32];
} ShaderStructConstr;

typedef enum
{
	SHADER_OPERAND_TYPE_ACCESS,
	SHADER_OPERAND_TYPE_LOAD,
	SHADER_OPERAND_TYPE_STORE,
	SHADER_OPERAND_TYPE_EXTRACT,
	SHADER_OPERAND_TYPE_CONSTRUCT,
	SHADER_OPERAND_TYPE_ADD,
	SHADER_OPERAND_TYPE_SUB,
	SHADER_OPERAND_TYPE_MUL,
	SHADER_OPERAND_TYPE_DIV,
} ShaderOperandType;

typedef enum
{
	SHADER_DATA_FLAG_UNSIGNED = 0x1,
	SHADER_DATA_FLAG_OUTPUT = 0x2,
	SHADER_DATA_FLAG_UNIFORM = 0x4,
} ShaderDataFlags;

typedef struct
{
	ShaderVariableType type;
	uint32_t indx;
	uint32_t orig_indx;
	uint32_t location;
} InputOutputData;

typedef struct
{
	uint32_t indx;
	uint32_t res_store_indx;
	ShaderOperandType op_type;
	uint32_t var_indx[8];
	uint32_t num_vars;
} ShaderOperand;

typedef struct ShaderVariable
{
	ShaderVariableType type;
	uint32_t indx;
	uint32_t args[6];
	uint32_t num_args;
	uint32_t values[6];
	uint32_t num_value;
	ShaderDataFlags flags;
	uint32_t result_type_indx;
} ShaderVariable;