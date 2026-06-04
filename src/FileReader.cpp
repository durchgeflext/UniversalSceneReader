
#include "FileReader.hpp"

#include <iostream>
#include <ostream>

#include "spdlog/spdlog.h"

void FileReader::printMessage()
{
    std::cout << "Hello world!" << std::endl;
    spdlog::debug("Hello world! from Debug File Reader");
    SPDLOG_DEBUG("Hello world! from Debug File Reader");
}
