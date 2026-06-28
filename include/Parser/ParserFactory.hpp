#pragma once


#include <memory>

#include "Format.hpp"
#include "ParserInterface.hpp"
#include "Platform.hpp"

class USCR_API ParserFactory {
    public:
    static std::unique_ptr<ParserInterface> makeParser(const FileFormat fmt);
};
