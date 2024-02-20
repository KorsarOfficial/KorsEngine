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

}