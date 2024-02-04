#ifndef E_RESOURCE_ENGINE_H
#define E_RESOURCE_ENGINE_H

#include "engine_includes.h"

extern bool enableValidationLayers;

extern EIExtent2D swapChainExtent;

extern void* e_window;
extern void* instance;
extern void* debugMessenger;

extern void* e_physicalDevice;
extern void* e_device;

extern void* graphicsQueue;
extern void* presentQueue;

extern void* surface;

extern void* current_render;

extern void* swapChain;
extern void** swapChainImages;
extern void** swapChainImageViews;

extern void* renderPass;
extern void* commandPool;

extern void** swapChainFramebuffers;
extern void** commandBuffers;

extern void** imageAvailableSemaphores;
extern void** renderFinishedSemaphores;

extern void* depthImage;
extern void* depthImageMemory;
extern void* depthImageView;