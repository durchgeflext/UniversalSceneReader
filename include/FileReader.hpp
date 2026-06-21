#pragma once

#include <filesystem>
#include <fstream>
#include <string>

#include "Platform.hpp"
#include "spdlog/spdlog.h"

class USCR_API FileReader {

    std::filesystem::path path;
    bool binary = false;

    public:
    explicit FileReader(const std::string& path, const bool binary = false) : path(path), binary(binary) {

    }
    explicit FileReader(const std::filesystem::path& path, const bool binary = false) : path(path), binary(binary) {

    }

    void readFile() {
        const int flag = std::ios_base::in | ((binary) ? std::ios_base::binary : 0);
        std::ifstream file(path, flag);

        if (file.rdstate() == std::ios_base::failbit) {
            spdlog::error("Reading file {} failed", path.generic_string());
        }
    }
};
