#include "e_resource_data.h"

#include <vulkan/vulkan.h>

vec2 viewSize = { 0, 0 };
vec2 diffSize = { 1.0f, 1.0f };


int WIDTH = 1024;
int HEIGHT = 800;

char app_name[256];

void* e_var_current_entry = NULL;

void* cam2D;
void* cam3D;

void* dir_shadow_array;
uint32_t num_dir_shadows;

void* point_shadow_array;
uint32_t num_point_shadows;

void* spot_shadow_array;
uint32_t num_spot_shadows;

char* rootDirPath;

void* e_var_images;
int e_var_num_images = 0;

void** e_var_lights = NULL;
int e_var_num_lights = 0;

FontCache* e_var_fonts = NULL;
uint32_t e_var_num_fonts = 0;

int define_font_loaded = 0;

const char* validationLayers[] = {
    "VK_LAYER_KHRONOS_validation"
};
uint32_t num_valid_layers = 1;

const char* deviceExtensions[] = {
    VK_KHR_SWAPCHAIN_EXTENSION_NAME
};
uint32_t num_dev_extensions = 1;

const FontIndexes fontIndexes[] = {
    { 1025, 0xD081 },//�
    { 1040, 0xD090 },//�
    { 1041, 0xD091 },//�
    { 1042, 0xD092 },//�
    { 1043, 0xD093 },//�
    { 1044, 0xD094 },//�
    { 1045, 0xD095 },//�
    { 1046, 0xD096 },//�
    { 1047, 0xD097 },//�
    { 1048, 0xD098 },//�
    { 1049, 0xD099 },//�
    { 1050, 0xD09A },//�
    { 1051, 0xD09B },//�
    { 1052, 0xD09C },//�
    { 1053, 0xD09D },//�
    { 1054, 0xD09E },//�
    { 1055, 0xD09F },//�
    { 1056, 0xD0A0 },//�
    { 1057, 0xD0A1 },//�
    { 1058, 0xD0A2 },//�
    { 1059, 0xD0A3 },//�
    { 1060, 0xD0A4 },//�
    { 1061, 0xD0A5 },//�
    { 1062, 0xD0A6 },//�
    { 1063, 0xD0A7 },//�
    { 1064, 0xD0A8 },//�
    { 1065, 0xD0A9 },//�
    { 1066, 0xD0AA },//�
    { 1067, 0xD0AB },//�
    { 1068, 0xD0AC },//�
    { 1069, 0xD0AD },//�
    { 1070, 0xD0AE },//�
    { 1071, 0xD0AF },//�
    { 1072, 0xD0B0 },//�
    { 1073, 0xD0B1 },//�
    { 1074, 0xD0B2 },//�
    { 1075, 0xD0B3 },//�
    { 1076, 0xD0B4 },//�
    { 1077, 0xD0B5 },//�
    { 1078, 0xD0B6 },//�
    { 1079, 0xD0B7 },//�
    { 1080, 0xD0B8 },//�
    { 1081, 0xD0B9 },//�
    { 1082, 0xD0BA },//�
    { 1083, 0xD0BB },//�
    { 1084, 0xD0BC },//�
    { 1085, 0xD0BD },//�
    { 1086, 0xD0BE },//�
    { 1087, 0xD0BF },//�
    { 1088, 0xD180 },//�
    { 1089, 0xD181 },//�
    { 1090, 0xD182 },//�
    { 1091, 0xD183 },//�
    { 1092, 0xD184 },//�
    { 1093, 0xD185 },//�
    { 1094, 0xD186 },//�
    { 1095, 0xD187 },//�
    { 1096, 0xD188 },//�
    { 1097, 0xD189 },//�
    { 1098, 0xD18A },//�
    { 1099, 0xD18B },//�
    { 1100, 0xD18C },//�
    { 1101, 0xD18D },//�
    { 1102, 0xD18E },//�
    { 1103, 0xD18F },//�
    { 1105, 0xD191 },//�
};
