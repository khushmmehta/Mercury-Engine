#pragma once

#include <vk_types.h>
#include <unordered_map>
#include <filesystem>

struct GeoSurface
{
    uint32_t startIndex;
    uint32_t count;
};

struct MeshAsset
{
    std::string name;

    std::vector<GeoSurface> surfaces;
    GPUMeshBuffers meshBuffers;
};

class MercuryEngine;

std::optional<std::vector<std::shared_ptr<MeshAsset>>> loadGlftMeshes(MercuryEngine* engine, std::filesystem::path filePath);
