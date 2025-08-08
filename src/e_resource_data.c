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
    { 1025, 0xD081 },//¨
    { 1040, 0xD090 },//À
    { 1041, 0xD091 },//Á
    { 1042, 0xD092 },//Â
    { 1043, 0xD093 },//Ã
    { 1044, 0xD094 },//Ä
    { 1045, 0xD095 },//Å
    { 1046, 0xD096 },//Æ
    { 1047, 0xD097 },//Ç
    { 1048, 0xD098 },//È
    { 1049, 0xD099 },//É
    { 1050, 0xD09A },//Ê
    { 1051, 0xD09B },//Ë
    { 1052, 0xD09C },//Ì
    { 1053, 0xD09D },//Í
    { 1054, 0xD09E },//Î
    { 1055, 0xD09F },//Ï
    { 1056, 0xD0A0 },//Ð
    { 1057, 0xD0A1 },//Ñ
    { 1058, 0xD0A2 },//Ò
    { 1059, 0xD0A3 },//Ó
    { 1060, 0xD0A4 },//Ô
    { 1061, 0xD0A5 },//Õ
    { 1062, 0xD0A6 },//Ö
    { 1063, 0xD0A7 },//×
    { 1064, 0xD0A8 },//Ø
    { 1065, 0xD0A9 },//Ù
    { 1066, 0xD0AA },//Ú
    { 1067, 0xD0AB },//Û
    { 1068, 0xD0AC },//Ü
    { 1069, 0xD0AD },//Ý
    { 1070, 0xD0AE },//Þ
    { 1071, 0xD0AF },//ß
    { 1072, 0xD0B0 },//à
    { 1073, 0xD0B1 },//á
    { 1074, 0xD0B2 },//â
    { 1075, 0xD0B3 },//ã
    { 1076, 0xD0B4 },//ä
    { 1077, 0xD0B5 },//å
    { 1078, 0xD0B6 },//æ
    { 1079, 0xD0B7 },//ç
    { 1080, 0xD0B8 },//è
    { 1081, 0xD0B9 },//é
    { 1082, 0xD0BA },//ê
    { 1083, 0xD0BB },//ë
    { 1084, 0xD0BC },//ì
    { 1085, 0xD0BD },//í
    { 1086, 0xD0BE },//î
    { 1087, 0xD0BF },//ï
    { 1088, 0xD180 },//ð
    { 1089, 0xD181 },//ñ
    { 1090, 0xD182 },//ò
    { 1091, 0xD183 },//ó
    { 1092, 0xD184 },//ô
    { 1093, 0xD185 },//õ
    { 1094, 0xD186 },//ö
    { 1095, 0xD187 },//÷
    { 1096, 0xD188 },//ø
    { 1097, 0xD189 },//ù
    { 1098, 0xD18A },//ú
    { 1099, 0xD18B },//û
    { 1100, 0xD18C },//ü
    { 1101, 0xD18D },//ý
    { 1102, 0xD18E },//þ
    { 1103, 0xD18F },//ÿ
    { 1105, 0xD191 },//¸
};
