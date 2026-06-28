#pragma once
#include "ParserInterface.hpp"
#include "Platform.hpp"

class USCR_API WavefrontParser : public ParserInterface {

    public:
    Scene parse(FileReader& reader) override;
};