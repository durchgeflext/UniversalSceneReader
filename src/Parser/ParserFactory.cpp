
#include <memory>

#include "Parser/ParserFactory.hpp"
#include "Format.hpp"
#include "Parser/ParserInterface.hpp"
#include "Parser/WavefrontParser.hpp"
#include "spdlog/spdlog.h"


std::unique_ptr<ParserInterface> ParserFactory::makeParser(const FileFormat fmt) {
    switch (fmt) {
    case OBJ:
        return std::make_unique<WavefrontParser>();
    case ERROR:
    default:
        spdlog::error("Scene File Format not supported");
        return std::make_unique<ParserInterface>();
    }
}
