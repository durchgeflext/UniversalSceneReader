#pragma once
#include <filesystem>


enum FileFormat {
    ERROR,
    OBJ
};

static FileFormat getFormat(const std::filesystem::path& path) {
    if (path.extension() == ".obj" || path.extension() == ".OBJ") {
        return OBJ;
    }
    return ERROR;
}

static bool isBinary(const FileFormat fmt) {
    switch (fmt) {
    case OBJ:
    case ERROR:
    default:
        return false;
    }
}

static std::string getFormatString(const FileFormat fmt) {
    switch (fmt) {
    case OBJ:
        return "Wavefront";
    case ERROR:
    default:
        return "Error";
    }
}