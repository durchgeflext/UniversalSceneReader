
#include <fstream>

#include "FileReader.hpp"
#include "spdlog/spdlog.h"

void FileReader::readFile()  {
    const int flag = std::ios_base::in | ((binary) ? std::ios_base::binary : 0);
    std::ifstream file(path, flag);

    if (file.rdstate() == std::ios_base::failbit) {
        spdlog::error("Reading file {} failed", path.generic_string());
    }
}

void FileReader::writeFile() {

}
