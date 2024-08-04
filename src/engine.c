#include "engine.h"

#include <vulkan/vulkan.h>

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include "e_texture_variables.h"

#include "e_debuger.h"
#include "e_device.h"

#include "string.h"
#include "e_window.h"
#include "swapchain.h"
#include "pipeline.h"
#include "e_buffer.h"
#include "e_texture.h"

#include "gameObject.h"
#include "textObject.h"
#include "lightObject.h"
#include "render_texture.h"

#include "e_widget_entry.h"
#include "e_widget_entry_area.h"

#include "e_camera.h"

#include "e_texture.h"

#include "e_tools.h"

#include "e_resource_data.h"
#include "e_resource_engine.h"

EngineRenderItems renderItems;

EngineDrawItems drawItems;

typedef void (*e_charCallback)(GLFWwindow*, uint32_t);
typedef void (*e_keyCallback)(GLFWwindow*, int , int , int , int );

void * RecreateFunc = NULL;

e_charCallback *charCallbacks;
int charCallbackSize;

e_keyCallback *keyCallbacks;
int keyCallbackSize;

void EngineCharacterCallback(GLFWwindow* window, uint32_t codepoint)
{
    EntryWidgetCharacterCallback(window, codepoint);

    for(int i=0; i < charCallbackSize;i++)
        charCallbacks[i](window, codepoint);
}

void EngineKeyCallback(GLFWwindow* window,  int key, int scancode, int action, int mods)
{
    EntryWidgetKeyCallback(window, key, scancode, action, mods);

    for(int i=0; i < keyCallbackSize;i++)
        keyCallbacks[i](window, key, scancode, action, mods);
}

void EngineInitVulkan(){
    createInstance();
    setupDebugMessenger();
    createSurface();
    pickPhysicalDevice();
    createLogicalDevice();
    SwapChainCreate();
    SwapChainCreateImageViews();
    BuffersCreateCommandPool();
    ToolsCreateDepthResources();
    BuffersCreateCommand();
    EngineCreateSyncobjects();

    memset(&drawItems, 0, sizeof(EngineDrawItems));
    memset(&renderItems, 0, sizeof(EngineRenderItems));

    charCallbacks = (e_charCallback *) calloc(0, sizeof(e_charCallback));
    keyCallbacks = (e_keyCallback *) calloc(0, sizeof(e_keyCallback));

    e_var_lights = calloc(0, sizeof(LightObject *));
    e_var_num_lights = num_dir_shadows = num_point_shadows = num_spot_shadows = 0;

    e_var_images = calloc(MAX_IMAGES, sizeof(engine_buffered_image));
    e_var_num_images = 0;

    e_var_fonts = calloc(MAX_FONTS, sizeof(FontCache));
    e_var_num_fonts = 0;

    engine_buffered_image *images = e_var_images;
    TextureCreateEmptyDefault(&images[e_var_num_images].texture);
    TextureCreateTextureImageView(&images[e_var_num_images].texture, VK_IMAGE_VIEW_TYPE_2D);
    TextureCreateSampler(&images[e_var_num_images].texture.textureSampler, images[e_var_num_images].texture.textureType,  images[e_var_num_images].texture.image_data.mip_levels);
    char *text = "Null texture";
    memcpy(images[e_var_num_images].path, text, strlen(text));
    e_var_num_images ++;

}

void EngineInitSystem(int width, int height, const char* name){
    strcpy(app_name, name);
    
    WIDTH = width;
    HEIGHT = height;

    viewSize.x = WIDTH;
    viewSize.y = HEIGHT;

    alloc_buffers_memory_head = calloc(1, sizeof(ChildStack));
    alloc_descriptor_head = calloc(1, sizeof(ChildStack));
    alloc_pipeline_head = calloc(1, sizeof(ChildStack));

    initWindow();
    EngineInitVulkan();

    glfwSetCharCallback(e_window, EngineCharacterCallback);
    glfwSetKeyCallback(e_window, EngineKeyCallback);

    e_var_current_entry = NULL;

}

void EngineFixedCursorCenter(){
    glfwSetCursorPos(e_window, WIDTH / 2, HEIGHT / 2);
}

void EngineGetCursorPos(double *xpos, double *ypos){
    glfwGetCursorPos(e_window, xpos, ypos);
}

void EngineSetCursorPos(float xpos, float ypos){
    glfwSetCursorPos(e_window, xpos, ypos);
}

void EngineHideCursor(char state){
    switch(state){
        case 0 :
            glfwSetInputMode(e_window, GLFW_CURSOR, GLFW_CURSOR_DISABLED);
            break;
        case 1 :
            glfwSetInputMode(e_window, GLFW_CURSOR, GLFW_CURSOR_HIDDEN);
            break;
        case 2 :
            glfwSetInputMode(e_window, GLFW_CURSOR, GLFW_CURSOR_NORMAL);
            break;
    }
}

int EngineGetMousePress(int Key){
    int state = glfwGetMouseButton(e_window, Key);

    return state;
}

int EngineWindowIsClosed(){
    return glfwWindowShouldClose(e_window);
}