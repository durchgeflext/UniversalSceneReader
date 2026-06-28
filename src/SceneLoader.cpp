#include "SceneLoader.hpp"

#include "spdlog/spdlog.h"

Scene SceneLoader::load() {
    spdlog::info("Loading scene file {} as format {}", this->path.generic_string(), getFormatString(this->fmt));
    iparser->parse(reader);
    return {};
}
