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