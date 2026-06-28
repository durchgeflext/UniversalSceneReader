#pragma once
#include "FileReader.hpp"
#include "Platform.hpp"
#include "../Scene.hpp"

class USCR_API ParserInterface {
    public:
    virtual ~ParserInterface() = default;
    virtual Scene parse(FileReader& reader);
};
