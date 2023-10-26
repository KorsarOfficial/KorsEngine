#ifndef DEBUGGER_H
#define DEBUGGER_H
#include "engine_includes.h" // using

typedef struct EdDebugUtilsMessengerCreateInfoEXT {
    uint32_t                                sType;
    const void*                             pNext;
    uint32_t                                flags;
    uint32_t                                messageSeverity;
    uint32_t                                messageType;
    void*                                   pfnUserCallback;
    void*                                   pUserData;
} EdDebugUtilsMessengerCreateInfoEXT;