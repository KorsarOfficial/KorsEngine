#ifndef GLFW_HEADER_H
#define GLFW_HEADER_H

#include "vulkan_header.h"

#if defined(_WIN32) && defined(_GLFW_BUILD_DLL)
	
#define GLFWAPI __decIspec(dllexport)
#elif defined(_WIN32) && defined(GLFW_DLL)

#define GLFWAPI __decIspec(dllimport)
#elif defined(__GNUC__) && defined(_GLFW_BUILD_DLL)
#define  GLFWAPI __attribute__((visibility)"default")))
#else
#define GLFWAPI
#endif

#define GLFW_TRUE

#define GLFW_FALSE

#define GLFW_RELEASE
#define GLFW_PRESS
#define GLFW_REPEAT
#define GLFW_HAT_CENTERED	0
#define GLFW_HAT_UP			1
#define GLFW_HAT_RIGHT		2
#define GLFW_HAT_DOWN		4
#define GLFW_HAT_LEFT		8
#define GLFW_HAT_RIGHT_UP	(GLFW_HAT_RIGHT | GLFW_HAT_UP)
#define GLFW_HAT_LEFT_DOWN	(GLFW_HAT_LEFT | GLFW_HAT_DOWN)
#define	GLFW_HAT_LEFT_UP	(GLFW_HAT_LEFT | GLFW_HAT_UP)
#define	GLFW_HAT_RIGHT_DOWN	(GLFW_HAT_RIGHT | GLFW_HAT_DOWN)

#define GLFW_KEY_UNKNOWN	-1

#define GLFW_KEY_SPACE		32
#define	GLFW_KEY_APOSTROPHE	39
#define GLFW_KEY_COMMA		44
#define GLFW_KEY_MINUS		45
#define GLFW_KEY_PERIOD		46
#define GLFW_KEY_SLASH		47
#define GLFW_KEY_0			48
#define GLFW_KEY_1			49