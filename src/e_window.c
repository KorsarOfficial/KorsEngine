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

    for(int i=0; i < num_valid_layers; i++)
    {
        layerFound = false;

        for(int j=0; j < layerCount; j++)
        {
            if(strcmp(validationLayers[i], availableLayers[j].layerName) == 0)
            {
                layerFound = true;
                break;
            }
        }

        if(!layerFound)
            return false;
    }

    free(availableLayers);

    return true;

}

const char** getRequiredExtensions()

const char** extensions = glfwGetRequiredInstanceExtensions(&glfwExtensionCount);