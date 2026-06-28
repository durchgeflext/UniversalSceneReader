#pragma once
#include <vector>

#include "Platform.hpp"

struct USCR_API Scene {
    std::vector<float> vertices;
    std::vector<size_t> indices;
    //TODO: Texture/Material/etc... information
};
