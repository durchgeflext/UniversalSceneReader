#pragma once

#include <filesystem>

#include "Platform.hpp"

class USCR_API FileReader {

    std::filesystem::path path;
    bool binary = false;

    public:
    explicit FileReader(const std::filesystem::path& path, const bool binary = false) : path(path), binary(binary) {

    }

    void readFile();
    void writeFile();
};
