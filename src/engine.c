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
#include "e_resource_engine.h"#include "engine.h"

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

void *RecreateFunc = NULL;

e_charCallback *charCallbacks;
int charCallbackSize;

e_keyCallback *keyCallbacks;
int keyCallbackSize;

void EngineCharacterCallback(GLFWwindow* window, uint32_t codepoint)
{
	EntryWidgetCharacterCallback(window, codepoint)

	for(int i=0; i < charCallbackSize;i++)
	charCallbacks[i](window,codepoint)
}

void EngineKeyCallback(GLFWwindow* window, int key, int scancode, int action, int mods)
{
	EntryWidgetCharacterCallback(window, key, scancode, action, mods);
	
	for(int i=0; i < keyCallbackSize; i++)
	keyCallbacks[i](window,key,scancode,action,mods);
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