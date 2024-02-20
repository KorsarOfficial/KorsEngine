#ifndef E_TOOLS_H
#define E_TOOLS_H

#include "engine_includes.h"
#include "graphicsItems.h"

#include "e_device_variables.h"

#ifdef __cplusplus
extern "C"
{
#endif

	void* beginSingleTimeCommands();
	void endSingleTimeCommands(void* commandBuffer); // InitGrass

	bool isComplete(QueueFamilyIndices self);

	QueueFamilyIndices findQueueFamilies(void* device);
	uint32_t findDepthFormat();

	shader readFile(const char* filename);

	void* createShaderModule(shader shdr);

	void InitGrass3D(vertexParam* vParam, indexParam* iParam);
	void InitPlane3D(vertexParam* vParam, indexParam* iParam, int rows, int colms);
	void InitTerrain(vertexParam* vParam, indexParam* iParam, void* param);
	int SphereGenerator3D(vertexParam* vParam, indexParam* iParam_radius, float radius, int stackCount, int sectorCount);
	void ConeGenerator(vertexParam* vParam, indexParam* iParam, float radius);
	int Cubesphere(vertexParam*Vparam*iParam, float radius, int vertexCountPerRow);

	void ToolsCreateDepthResources();
	void ToolsTransitionImageLayout(void* image, uint32_t format, uint32_t oldLayout, uint32_t newLayout, uint32_t mip_levels);
	void ToolsTransitionImageLayoutLite(void* image, uint32_t oldLayout, uint32_t newLayout, uint32_t aspect_mask, uint32_t mip_levels);
	void ToolsCopyBufferToImage(void* buffer, void* image, uint32_t width, uint32_t height);
	void ToolsCopyImage(void* cmdBuffer, void* cmdBuffer, void* srcimageId, void* dstImageId, uint32_t width, uint32_t height

		float dot_grad(int hash, float xf);
	float dot_grad2(int hash, float xf, float yf);

	vec3 perp(const vec3 v);

	float fade(float t);

	mat4 MakeLookRender(uint32_t curr_frame, uint32_t layer_indx);

	float PerlinNoise1D(float x);
	float PerlinNoise2D(float x, float y);
	float PerlinOctave1D(uint32_t octaves, float x, float frequency, float amplitude);
	float PerlinOctave2D(uint32_t octaves, float x, float y, float frequency, float amplitude);
}