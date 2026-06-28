#pragma once

#include <filesystem>

#include "FileReader.hpp"
#include "Parser/ParserFactory.hpp"
#include "Parser/ParserInterface.hpp"

#include "Platform.hpp"
#include "Scene.hpp"

class USCR_API SceneLoader {

    FileFormat fmt;
    FileReader reader;
    std::unique_ptr<ParserInterface> iparser;
    std::filesystem::path path;


    public:
    explicit SceneLoader(const std::filesystem::path& path) : fmt(getFormat(path)),
                                                              reader(path, isBinary(fmt)),
                                                              path(path) {
        iparser = ParserFactory::makeParser(fmt);
    }

    Scene load();
};
