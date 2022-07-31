#include "../lib/file_manager.hpp"
#include <fstream>
#include <iostream>
#include <ostream>
#include <sstream>
#include <string>

namespace uart {
namespace debugger {

FileManager::FileManager(const std::string& file_name) : file_name_(file_name) {
    std::cout << "anaylsis file  : " << file_name << " start working right now "
              << std::endl;
}

std::string FileManager::GetData() {
    std::stringstream buffer;
    std::ifstream analysis_file;
    analysis_file.open("/dev/ttyUSB0", std::ios::in);
    buffer << analysis_file.rdbuf();
    analysis_file.close();
    return buffer.str();
}

} // namespace debugger
} // namespace uart
