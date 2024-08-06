#include "e_window.h"

#include <GLFW/glfw3.h>
#include <vulkan/vulkan.h>

#include "e_resource_data.h"
#include "e_resource_engine.h"

bool checkValidationLayerSupport(){
    uint32_t layerCount;
    vkEnumerateInstanceLayerProperties(&layerCount, NULL);

    VkLayerProperties* availableLayers = (VkLayerProperties*) malloc(layerCount * sizeof(VkLayerProperties));
    vkEnumerateInstanceLayerProperties(&layerCount, availableLayers);

    bool layerFound;