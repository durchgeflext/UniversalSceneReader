#include <iostream>

#include "FileReader.hpp"

#include "spdlog/spdlog.h"

int main() {
    spdlog::set_level(spdlog::level::debug);
    std::cout << "Hello world from the test!" << std::endl;
    FileReader::printMessage();
    spdlog::warn("Hello world from the test!");
    return 0;
}
