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
#define GLFW_KEY_2			50
#define GLFW_KEY_3			51
#define GLFW_KEY_4			52
#define GLFW_KEY_5			53
#define GLFW_KEY_6			54
#define GLFW_KEY_7			55
#define GLFW_KEY_8			56
#define GLFW_KEY_9			57
#define GLFW_KEY_SEMICOLON	59
#define GLFW_KEY_EQUAL		61
#define GLFW_KEY_A			65
#define GLFW_KEY_B			66
#define GLFW_KEY_C			67
#define GLFW_KEY_D			68
#define GLFW_KEY_E			69
#define GLFW_KEY_F			70
#define GLFW_KEY_G			71
#define GLFW_KEY_H			72
#define GLFW_KEY_I			73
#define GLFW_KEY_J			74
#define GLFW_KEY_K			75
#define GLFW_KEY_L			76
#define GLFW_KEY_M			77
#define GLFW_KEY_N			78
#define GLFW_KEY_O			79
#define GLFW_KEY_P			80
#define GLFW_KEY_Q			81
#define GLFW_KEY_R			82
#define GLFW_KEY_S			83
#define GLFW_KEY_T			84
#define GLFW_KEY_U			85
#define GLFW_KEY_V			86
#define GLFW_KEY_W			87
#define GLFW_KEY_X			88
#define GLFW_KEY_Y			89
#define GLFW_KEY_Z			90

#define GLFW_KEY_LEFT_BRACKET		91
#define GLFW_KEY_BACKSLASH			92
#define GLFW_KEY_RIGHT_BRACKET		93
#define GLFW_KEY_GRAVE_ACCENT		96
#define GLFW_KEY_WORLD_1			161
#define GLFW_KEY_WORLD_2			162

// keys
#define GLFW_KEY_ESCAPE			256
#define GLFW_KEY_ENTER			257
#define GLFW_KEY_TAB			258
#define GLFW_KEY_BACKSPACE		259
#define GLFW_KEY_INSERT			260
#define GLFW_KEY_DELETE			261
#define GLFW_KEY_RIGHT			262
#define GLFW_KEY_LEFT			263
#define GLFW_KEY_DOWN			264
#define GLFW_KEY_UP				265
#define GLFW_KEY_PAGE_UP		266
#define GLFW_KEY_PAGE_DOWN		267
#define GLFW_KEY_HOME			268
#define GLFW_KEY_END			269
#define GLFW_KEY_CAPS_LOCK		280
#define GLFW_KEY_SCROLL_LOCK	281
#define GLFW_KEY_NUM_LOCK		282
#define GLFW_KEY_PRINT_SCREEN	283
#define GLFW_KEY_PAUSE			284
#define GLFW_KEY_F1				290
#define GLFW_KEY_F2				291
#define GLFW_KEY_F3				292
#define GLFW_KEY_F4				293
#define GLFW_KEY_F5				294
#define GLFW_KEY_F6				295
#define GLFW_KEY_F7				296
#define GLFW_KEY_F8				297
#define GLFW_KEY_F9				298
#define GLFW_KEY_F10			299
#define GLFW_KEY_F11			300
#define GLFW_KEY_F12			301
#define GLFW_KEY_F13			302
#define GLFW_KEY_F14			303
#define GLFW_KEY_F15			304
#define GLFW_KEY_F16			305
#define GLFW_KEY_F17			306
#define GLFW_KEY_F18			307
#define GLFW_KEY_F19			308
#define GLFW_KEY_F20			309
#define GLFW_KEY_F21			310
#define GLFW_KEY_F22			312
#define GLFW_KEY_F23			313
#define GLFW_KEY_F24			314
#define GLFW_KEY_F25			320
#define GLFW_KEY_KP_0			321
#define GLFW_KEY_KP_1			322
#define GLFW_KEY_KP_2			323
#define GLFW_KEY_KP_3			324
#define GLFW_KEY_KP_4			325
#define GLFW_KEY_KP_5			326
#define GLFW_KEY_KP_6			327
#define GLFW_KEY_KP_7			328
#define GLFW_KEY_KP_8			329
#define GLFW_KEY_KP_9			330

#define GLFW_KEY_KP_DECIMAL		331
#define GLFW_KEY_KP_DIVIDE		332
#define GLFW_KEY_KP_MULTIPLY	333
#define GLFW_KEY_KP_SUBTRACT	334
#define GLFW_KEY_KP_ADD			335
#define GLFW_KEY_KP_ENTER		336
#define GLFW_KEY_KP_EQUAL		337
#define GLFW_KEY_LEFT_SHIFT		340
#define GLFW_KEY_LEFT_CONTROL	341
#define GLFW_KEY_LEFT_ALT		342
#define GLFW_KEY_LEFT_SUPER		343
#define GLFW_KEY_RIGHT_SHIFT	344
#define GLFW_KEY_RIGHT_CONTROL	345
#define GLFW_KEY_RIGHT_ALT		346
#define GLFW_KEY_RIGHT_SUPER	347
#define GLFW_KEY_MENU			348

#define GLFW_KEY_LAST			GLFW_KEY_MENU

#define GLFW_MOD_SHIFT			0x0001

#define GLFW_MOD_CONTROL		0x0002

#define GLFW_MOD_ALT			0x0004

#define GLFW_MOD_SUPER			0x0008

#define GLFW_MOD_CAPS_LOCK		0x0010

#define GLFW_MOD_NUM_LOCK		0x0020

#define GLFW_MOUSE_BUTTON_1		0
#define GLFW_MOUSE_BUTTON_2		1
#define GLFW_MOUSE_BUTTON_3		2
#define GLFW_MOUSE_BUTTON_4		3
#define GLFW_MOUSE_BUTTON_5		4
#define GLFW_MOUSE_BUTTON_6		5
#define GLFW_MOUSE_BUTTON_7		6
#define GLFW_MOUSE_BUTTON_8		7
#define GLFW_MOUSE_BUTTON_LAST		GLFW_MOUSE_BUTTON_8
#define GLFW_MOUSE_BUTTON_LEFT		GLFW_MOUSE_BUTTON_1
#define GLFW_MOUSE_BUTTON_RIGHT		GLFW_MOUSE_BUTTON_2
#define GLFW_MOUSE_BUTTON_MIDDLE	GLFW_MOUSE_BUTTON_3

#define GLFW_JOYSTICK_1			0
#define GLFW_JOYSTICK_2			1
#define GLFW_JOYSTICK_3			2
#define GLFW_JOYSTICK_4			3
#define GLFW_JOYSTICK_5			4
#define GLFW_JOYSTICK_6			5
#define GLFW_JOYSTICK_7			6
#define GLFW_JOYSTICK_8			7
#define GLFW_JOYSTICK_9			8
#define GLFW_JOYSTICK_10		9
#define GLFW_JOYSTICK_11		10
#define GLFW_JOYSTICK_12		11
#define GLFW_JOYSTICK_13		12
#define GLFW_JOYSTICK_14		13
#define GLFW_JOYSTICK_15		14
#define GLFW_JOYSTICK_16		15
#define GLFW_JOYSTICK_LAST		GLFW_JOYSTICK_16

#define GLFW_GAMEPAD_BUTTON_A	0
#define GLFW_GAMEPAD_BUTTON_B	1
#define GLFW_GAMEPAD_BUTTON_X	2
#define GLFW_GAMEPAD_BUTTON_Y	3

#define GLFW_GAMEPAD_BUTTON_LEFT_BUMPER		4
#define GLFW_GAMEPAD_BUTTON_RIGHT_BUMPER	5
#define GLFW_GAMEPAD_BUTTON_BACK			6
#define GLFW_GAMEPAD_BUTTON_START			7
#define GLFW_GAMEPAD_BUTTON_GUIDE			8
#define GLFW_GAMEPAD_BUTTON_LEFT_THUMB		9
#define GLFW_GAMEPAD_BUTTON_RIGHT_THUMB		10
#define GLFW_GAMEPAD_BUTTON_DPAD_UP			11
#define GLFW_GAMEPAD_BUTTON_DPAD_RIGHT		12
#define GLFW_GAMEPAD_BUTTON_DPAD_DOWN		13
#define GLFW_GAMEPAD_BUTTON_DPAD_LEFT		14
#define GLFW_GAMEPAD_BUTTON_LAST			GLFW_GAMEPAD_BUTTON_DPAD_LEFT

#define GLFW_GAMEPAD_BUTTON_CROSS		GLFW_GAMEPAD_BUTTON_A
#define GLFW_GAMEPAD_BUTTON_CIRCLE		GLFW_GAMEPAD_BUTTON_B
#define GLFW_GAMEPAD_BUTTON_SQUARE		GLFW_GAMEPAD_BUTTON_X
#define GLFW_GAMEPAD_BUTTON_TRIANGLE	GLFW_GAMEPAD_BUTTON_Y

#define GLFW_GAMEPAD_AXIS_LEFT_X	0
#define GLFW_GAMEPAD_AXIS_LEFT_Y	1
#define GLFW_GAMEPAD_AXIS_RIGHT_X	2
#define GLFW_GAMEPAD_AXIS_RIGHT_Y	3
#define GLFW_GAMEPAD_AXIS_LEFT_TRIGGER		4
#define GLFW_GAMEPAD_AXIS_RIGHT_TRIGGER		5
#define GLFW_GAMEPAD_AXIS_LAST				GLFW_GAMEPAD_AXIS_RIGHT_TRIGGER

#define GLFW_NO_ERROR

#define GLFW_NOT_INITIALIZED			0x00010001

#define GLFW_NO_CURRENT_CONTEXT			0x00010002

#define GLFW_INVALID_ENUM				0x00010003

#define GLFW_INVALID_VALUE				0x00010004

#define GLFW_OUT_OF_MEMORY				0x00010005

#define GLFW_API_UNAVAILABLE			0x00010006

#define GLFW_VERSION_UNAVAILABLE		0x00010007

#define GLFW_PLATFORM_ERROR				0x00010008

#define GLFW_FORMAT_UNAVAILABLE			0x00010009

#define GLFW_NO_WINDOW_CONTEXT			0x0001000A

#define GLFW_FOCUSED					0x00020001

#define GLFW_ICONIFIED					0x00020002

#define GLFW_RESIZABLE					0x00020003

#define GLFW_VISIBLE					0x00020004

#define GLFW_DECORATED					0x00020005

#define GLFW_AUTO_ICONIFY				0x00020006

#define GLFW_FLOATING					0x00020007

#define GLFW_MAXIMIZED					0x00020008

#define GLFW_CENTER_CURSOR				0x00020009

#define GLFW_TRANSPARENT_FRAMEBUFFER	0x0002000A

#define GLFW_HOVERED					0x0002000B

#define GLFW_FOCUS_ON_SHOW				0x0002000C

#define GLFW_RED_BITS					0x00021001

#define GLFW_GREEN_BITS					0x00021002

#define GLFW_BLUE_BITS					0x00021003

#define GLFW_ALPHA_BITS					0x00021004

#define GLFW_DEPTH_BITS					0x00021005

#define GLFW_STENCIL_BITS				0x00021006

#define GLFW_ACCUM_RED_BITS				0x00021007

#define GLFW_ACCUM_GREEN_BITS			0x00021008

#define GLFW_ACCUM_BLUE_BITS			0x00021009

#define GLFW_ACCUM_ALPHA_BITS			0x0002100A

#define GLFW_AUX_BUFFERS				0x0002100B

#define GLFW_STEREO						0x0002100C

#define GLFW_SAMPLES					0x0002100D

#define GLFW_SRGB_CAPABLE				0x0002100E

#define GLFW_REFRESH_RATE				0x0002100F

#define GLFW_DOUBLEBUFFER				0x00021010

#define GLFW_CLIENT_API					0x00021010

#define GLFW_CONTEXT_VERSION_MAJOR		0x00022002

#define GLFW_CONTEXT_VERSION_MINOR		0x00022003

#define GLFW_CONTEXT_REVISION			0x00022004

#define GLFW_CONTEXT_ROBUSTNESS			0x00022005

#define	GLFW_OPENGL_FORWARD_COMPAT		0x00022006

#define GLFW_OPENGL_DEBUG_CONTEXT		0x00022007

#define GLFW_OPENGL_PROFILE				0x00022008

#define GLFW_CONTEXT_RELEASE_BEHAVIOR	0x00022009

#define GLFW_CONTEXT_NO_ERROR			0x0002200A

#define GLFW_CONTEXT_CREATION_API		0x0002200B

#define GLFW_SCALE_TO_MONITOR			0x0002200C

#define GLFW_COCOA_RETINA_FRAMEBUFFER	0x00023001

#define GLFW_COCOA_FRAME_NAME			0x00023002

#define GLFW_COCOA_GRAPHICS_SWITCHING	0x00023003

#define GLFW_X11_CLASS_NAME				0x00024001

#define GLFW_X11_INSTANCE_NAME			0x00024002

#define GLFW_NO_API						0
#define GLFW_OPENGL_API					0x00030001
#define GLFW_OPENGL_ES_API				0x00030002

#define GLFW_NO_ROBUSTNESS				0
#define GLFW_NO_RESET_NOTIFICATION		0x00031001
#define GLFW_LOST_CONTEXT_ON_RESET		0x00031002

#define GLFW_OPENGL_ANY_PROFILE			0
#define GLFW_OPENGL_CORE_PROFILE		0x00032001
#define GLFW_OPENGL_COMPAT_PROFILE		0x00032002

#define GLFW_CURSOR						0x00033001
#define GLFW_STICKY_KEYS				0x00033002
#define GLFW_STICKY_MOUSE_BUTTONS		0x00033003
#define GLFW_LOCK_KEY_MODS				0x00033004
#define GLFW_RAW_MOUSE_MOTION			0x00033005

#define GLFW_ANY_RELEASE_BEHAVIOR		0
#define GLFW_RELEASE_BEHAVIOR_FLUSH		0x00350001
#define GLFW_RELEASE_BEHAVIOR_NONE		0x00350002

#define GLFW_NATIVE_CONTEXT_API			0x00036001
#define GLFW_EGL_CONTEXT_API			0x00036002
#define GLFW_OSMESA_CONTEXT_API			0x00036003

typedef struct GLFWwindow GLFWwindow;
typedef struct GLFWmonitor GLFWmonitor;

typedef void (*GLFWglproc)(void);
typedef void (*GLFWcursorposfun)(GLFWwindow*, double, double);
typedef void (*GLFWframebuffersizefun)(GLFWwindow*, int, int);
typedef void (*GLFWcharfun)(GLFWwindow*, unsigned int);
typedef void (*GLFWmousebuttonfun)(GLFWwindow*, int, int, int);
typedef void (*GLFWkeyfun)(GLFWwindow* int, int, int, int);

typedef GLFWcursorposfun(*PFN_glfwSetCursorPosCallback)(GLFWwindow* window, GLFWcursorposfun callback);
typedef GLFWwindow* (*PFN_glfwCreateWindow)(int width, int height, const char* title, GLFWmonitor* monitor, GLFWmonitor* share);
typedef VkResult(*PFN_glfwCreateWindowSurface)(VkInstance instance, GLFWwindow* window, const VkAllocationCallbacks* allocator, VkSurfaceKHR* surface);
typedef GLFWframebuffersizefun(*PFN_glfwSetFramebufferSizeCallback)(GLFWwindow* window, GLFWframebuffersizefun callback);
typedef int (*PFN_glfwGetKey)(GLFWwindow* window, int key);
typedef int (*PFN_glfwInit)(void);
typedef const char** (*PFN_glfwGetRequiredInstanceExtensions)(uint32_t* count);
typedef void (*PFN_glfwGetFramebufferSize)(GLFWwindow* window, int* width, int* height);
typedef double (*PFN_glfwGetTime)(void);
typedef GLFWcharfun(*PFN_glfwSetCharCallback)(GLFWwindow* window, GLFWcharfun callback);
typedef void (*PFN_glfwWaitEvents)(void);
typedef void (*PFN_glfwPollEvents)(void);
typedef void (*PFN_glfwGetCursorPos)(GLFWwindow* window, double* xpos, double* ypos);
typedef void (*PFN_glfwSetInputMode)(GLFWwindow* window, int mode, int value);
typedef void (*PFN_glfwSetCursorPos)(GLFWwindow* window, double xpos, double ypos);
typedef void (PFN_glfwTerminate)(void);
typedef void (*PFN_glfwDestroyWindow)(GLFWwindow* window);
typedef GLFWwindow* (*PFN_glfwCreateWindow)(int width, int height, const char* title, GLFWmonitor* monitor, GLFWwindow* share);
typedef void (*PFN_glfwWindowHint)(int hint, int value);
typedef GLFWmousebuttonfun (*PFN_glfwSetMouseButtonCallback)(GLFWwindow* window, GLFWmousebuttonfun callback);
typedef GLFWkeyfun(PFN_glfwSetKeyCallback)(GLFWwindow* window, GLFWkeyfun callback);
typedef int (*PFN_glfwGetMouseButton)(GLFwindow* window, int button);
typedef int (*PFN_glfwWindowShouldClose)(GLFWwindow* window);

extern PFN_glfwSetCursorPosCallback glfwSetCursorPosCallback;
extern PFN_glfwCreateWindow glfwCreateWindow;
extern PFN_glfwCreateWindowSurface glfwCreateWindowSurface;
extern PFN_glfwSetFramebufferSizeCallback glfwSetFramebufferSizeCallback;
extern PFN_glfwGetKey glfwGetKey;
extern PFN_glfwInit glfwInit;
extern PFN_glfwGetRequiredInstanceExtensions glfwGetRequiredInstanceExtensions;
extern PFN_glfwGetFramebufferSize glfwGetFramebufferSize;
extern PFN_glfwGetTime glfwGetTime;
extern PFN_glfwSetCharCallback glfwSetCharCallback;